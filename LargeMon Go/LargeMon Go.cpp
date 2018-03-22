// LargeMon Go.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LargeMon.h"
#include "LargeMonGenerator.h"
#include "Containers.h"
#include "AllLargeMons.h"

#include <iostream>

using namespace std;

int main()
{
	// Setup
	if (LargeMonGenerator::generateLargeMon() == false)
	{
		cout << "Bad";
	}
	bool temp = LargeMonGenerator::generateLargeMon();
	cout << AllLargeMons::allLargeMons[0].getName();
	cout << AllLargeMons::allLargeMons[0].getName();
	int boop;
	cin >> boop;
    return 0;
}