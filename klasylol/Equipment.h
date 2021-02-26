#pragma once
#include <vector>
#include "IItem.h"

class Equipment
{
public:
	Equipment();

private:
	std::vector<IItem> Items;
};

