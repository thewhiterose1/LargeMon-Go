#include "stdafx.h"
#include "stdlib.h"
#include "Containers.h"
#include "LargeMonGenerator.h"
#include "AllLargeMons.h"

using namespace std;

bool LargeMonGenerator::generateLargeMon()
{
	// Random generation engine
	random_device rd;
	default_random_engine generator(rd());
	// Generate type
	uniform_real_distribution<double> randType(0, Containers::types.size());
	string type = Containers::types.at(int(randType(generator)));
	// Generate name
	uniform_real_distribution<double> randSuffix(0, Containers::suffix.size());
	string name = type + Containers::suffix.at(int(randSuffix(generator)));
	// Geneate size
	uniform_real_distribution<double> randSize(1, 5);
	string tsize = to_string(randSize(generator)).substr(0, 4);
	double size = stod(tsize);
	// Generate description
	uniform_real_distribution<double> randDesc(0, Containers::desc.size());
	string desc = "A " + name + " that seems to be quite " + Containers::desc.at(int(randDesc(generator))) + ", and is about " + to_string(size) + " metres tall!";
	// Generate base attack value
	uniform_real_distribution<double> randAttack(8, 14);
	int attack = int (randAttack(generator));
	// Generate health
	uniform_real_distribution<double> randHealth(80, 120);
	int health = int(randHealth(generator));
	// Select antagonist, based on type from map stored in Containers
	string antagonist = Containers::antagonists.at(type);
	// Generate completed LargeMon, with relevant parameters, appending it to the list of all LargeMons
	AllLargeMons::allLargeMons.push_back(*new LargeMon(type, name, desc, antagonist, size, attack, health));
	return true;
}