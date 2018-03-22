// LargeMon Go.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "LargeMon.h"
#include "LargeMonGenerator.h"

using namespace std;

int main()
{
	Containers* containerSetup = new Containers();
	LargeMon* myLargeMon = new LargeMon("Fire", "Fire Large Mon", "A powerful fire LargeMon", "Water", 2, 20, 200);
	cout << myLargeMon->getHealth();
	LargeMonGenerator::generateLargeMon();
	int boop;
	cin >> boop;
    return 0;
}