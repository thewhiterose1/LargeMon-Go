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
	LargeMon* myLargeMon = new LargeMon("Fire", "Fire Large Mon", "A powerful fire LargeMon", "Water", 2, 20, 200);
	cout << myLargeMon->getHealth();
	LargeMonGenerator::generateLargeMon();
	int boop;
	cout << Containers::types.at(1);
	cin >> boop;
    return 0;
}