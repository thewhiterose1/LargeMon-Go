#pragma once

#include <string>
#include <map>

using namespace std;

class LargeMon
{
public:
	LargeMon(string, string, string, string, int, int, int);
	~LargeMon();
	map<char, char> anatagonists = {
		{ 'F', 'W' },
		{ 'W', 'F' },
		{ 'A', 'W' }
	};
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