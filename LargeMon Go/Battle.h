#pragma once

#include "LargeMon.h"
#include <iostream>
#include <string>

class Battle
{
public:
	Battle(LargeMon);
	~Battle();
	char turn;
	int turnCount;
	bool canSpecial;
	LargeMon pLargeMon;
	LargeMon eLargeMon;
	void saveLogFile();
};

