// LargeMon Go.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "LargeMon.h"

using namespace std;

int main()
{
	LargeMon* myLargeMon = new LargeMon("Fire", "Fire Large Mon", "A powerful fire LargeMon", "Water", 2, 20, 200);
	cout << "Hello";
	cout << myLargeMon->getName();
	int boop;
	cin >> boop;
    return 0;
}