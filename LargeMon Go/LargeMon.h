#pragma once

#include <string>

using namespace std;

enum Types
{
	air,
	fire,
	water,
};

class LargeMon
{
public:
	LargeMon(string, string, string, string, int, int, int);
	~LargeMon();
private:
	string name;
	string description;
	Types type;
	Types antagonist;
	int size;
	int attackPoints;
	int health;
};