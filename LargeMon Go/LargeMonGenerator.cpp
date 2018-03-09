#include "stdafx.h"
#include "stdlib.h"
#include "LargeMonGenerator.h"
#include "time.h"
#include <iostream>


LargeMonGenerator::LargeMonGenerator()
{
}

LargeMonGenerator::~LargeMonGenerator()
{
}

bool LargeMonGenerator::generateLargeMon()
{
	srand(time(NULL));
	int nhealth = rand() % 10 + 1;
	LargeMon* tempMon = new LargeMon(nhealth);
	cout << "HEALTH: " + tempMon->getHealth();
	return true;
}