#include "stdafx.h"
#include "stdlib.h"
#include "LargeMonGenerator.h"
#include "LargeMon.h"
#include "time.h"

using namespace std;

bool LargeMonGenerator::generateLargeMon()
{
	// Generate type
	
	// Generate name
	
	// Generate health
	srand(time(NULL));
	int nhealth = rand() % 10 + 1;

	// Generate base attack

	// Generate completed LargeMon, with relevant parameters
	LargeMon* tempMon = new LargeMon(nhealth);
	return true;
}