#pragma once
#include "Equipment.h"

class IBaseCharacter
{
protected: 
	int MaxHP = 0;
	int ActualHP = 0;
	int MagicDamage = 0;
	int PhysicalDamage = 0;
	double BaseArmor = 0;
	double ArmorMultipliter = 1;
	int MagicResistance = 0;
	double CriticalHitChance = 0;
	double CriticalHitMultipliter = 1;
	double BaseVelocity = 0;
	double VelocityMultipliter = 1;
	int Gold = 0;
	Equipment CharacterEquipment;
};

