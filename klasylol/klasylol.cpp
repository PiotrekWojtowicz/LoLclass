#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <thread>
#include <Windows.h>
#include <chrono>
#include <Mmsystem.h>
#include <mciapi.h>
#include <mmeapi.h>
#pragma comment(lib, "Winmm.lib")
std::string getRandomColor();
std::string happy = "";
std::string sad = "";
std::string czescLukaszchodznadol;

void loadAscii() {
    std::fstream plik;
    plik.open("happy.txt", std::ios::in);
    if (plik.good()) {
        while (!plik.eof())
        {
            std::string linia = "";
            std::getline(plik, linia);
            happy += linia + '\n';
        }
    }
    plik.close();
    plik.open("sad.txt", std::ios::in);
    if (plik.good()) {
        while (!plik.eof())
        {
            std::string linia = "";
            std::getline(plik, linia);
            sad += linia + '\n';
        }
    }
    plik.close();
}

void changeasci() {
    std::cout << happy;
    std::string color = "color " + getRandomColor();
    system(color.c_str());
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    system("CLS");
    std::cout << sad;
    color = "color " + getRandomColor();
    system(color.c_str());
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    system("CLS");
}

int main() {
    system("mode con:cols=100 lines=46");
    LPCWSTR a = L"open \"test.mp3\" type mpegvideo alias mp3";
    LPCWSTR b = L"play mp3 repeat";
    mciSendString(a, NULL, 0, NULL);
    mciSendString(b, NULL, 0, NULL);
    system("mshta \"javascript:code(close((V=(v=new ActiveXObject('SAPI.SpVoice')).GetVoices()).count&&v.Speak('Work in progress')))\"");
    loadAscii();
    while (true) {
        changeasci();
    }
    return 0;
}

std::string getRandomColor() {
    int random = rand() % 16;
    char first;
    if (random >= 10) {
        first = 'A' + (random-10);
    }
    else {
        first = '0'+ random;
    }
    std::string output = std::string(1, first);
    return output;
}

std::string getRandomColorHardMode(){
    char first = 'A' + rand() % 6;
    char second = '0' + rand() % 10;
    std::string output = std::string(1, first);
    output += std::string(1, second);
    return output;
}