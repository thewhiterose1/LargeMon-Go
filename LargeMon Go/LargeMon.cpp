#include "stdafx.h"
#include "LargeMon.h"

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

// Getter methods

string LargeMon::getType() { return type; }

string LargeMon::getName() { return name; }

string LargeMon::getDescription() { return description; }

int LargeMon::getSize() { return size; }

int LargeMon::getAttackPoints() { return attackPoints; }

int LargeMon::getHealth() { return health; }

string LargeMon::getAntagonist()
{
	return antagonist;
}

// Does damage to LargeMons health
void LargeMon::doDamage(int damage)
{
	health -= damage;
}

// Destructor

LargeMon::~LargeMon()
{
}
