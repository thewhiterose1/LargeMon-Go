#include "stdafx.h"
#include "stdlib.h"
#include "LargeMonGenerator.h"
#include "LargeMon.h"
#include "time.h"

using namespace std;

LargeMonGenerator::LargeMonGenerator()
{
}

LargeMonGenerator::~LargeMonGenerator()
{
}

bool LargeMonGenerator::generateLargeMon()
{
	// Generate type

	// Generate name
	
	// Generate health
	srand(time(NULL));
	int nhealth = rand() % 10 + 1;
	// Generate completed LargeMon
	LargeMon* tempMon = new LargeMon(nhealth);
	return true;
}