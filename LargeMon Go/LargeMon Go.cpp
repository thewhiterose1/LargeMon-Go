// LargeMon Go.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LargeMon.h"
#include "LargeMonGenerator.h"
#include "Containers.h"

#include <iostream>

using namespace std;

int main()
{
	// Setup
	LargeMon* testLargeMon = LargeMonGenerator::generateLargeMon();
	cout << testLargeMon->getDescription();
	cout << testLargeMon->getAntagonist();
	int boop;
	cin >> boop;
    return 0;
}