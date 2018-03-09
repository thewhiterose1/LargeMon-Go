#include "stdafx.h"
#include "LargeMon.h"
#include <string>

using namespace std;

// Constructors

LargeMon::LargeMon(string ntype, string nname, string ndescription, string nantagonist, int nsize, int nattackPoints, int nhealth)
{
	type = ntype;
	name = nname;
	description = ndescription;
	antagonist = nantagonist;
	size = nsize;
	attackPoints = nattackPoints;
	health = nhealth;
}

LargeMon::LargeMon()
{

}

LargeMon::LargeMon(int nhealth)
{
	health = nhealth;
}

// Getter methods

string LargeMon::getType() { return type; }

string LargeMon::getName() { return name; }

string LargeMon::getDescription() { return description; }

int LargeMon::getSize() { return size; }

int LargeMon::getAttackPoints() { return attackPoints; }

int LargeMon::getHealth() { return health; }

// Deconstructor

string LargeMon::getAntagonist()
{
	return antagonist;
}


LargeMon::~LargeMon()
{
}
