#include "stdafx.h"
#include <iostream>
#include "LargeMon.h"
#include <string>

using namespace std;

LargeMon::LargeMon(string type, string name, string description, string antagonist, int size, int attackPoints, int health)
{
	cout << "This is inside the LargeMon constructor";
	cin >> type;
}


LargeMon::~LargeMon()
{
}
