#pragma once

#include <string>
#include <map>

using namespace std;

/*!
A class header for the definition of individual LargeMons. Adheres to the private class data pattern in that 
individual attributes cannot be modified once initialised, and are only accesssible through getter methods.

@author Jeremy Hotham
@date 01/03/2018
*/

class LargeMon
{
public:
	LargeMon(string, string, string, string, int, int, int);
	LargeMon(int);
	~LargeMon();
	string getName();
	string getType();
	string getDescription();
	string getAntagonist();
	int getSize();
	int getAttackPoints();
	int getHealth();
private:
	string name;
	string description;
	string type;
	string antagonist;
	int size;
	int attackPoints;
	int health;
};