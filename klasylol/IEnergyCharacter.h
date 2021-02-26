#pragma once
class IEnergyCharacter
{
protected:
	int MaxEnergy = 0;
	int ActualEnergy = 0;
	double BaseEnergyPerTimeUnit = 0;
	double EnergyPerTimeUnitMultipliter = 1;
};

