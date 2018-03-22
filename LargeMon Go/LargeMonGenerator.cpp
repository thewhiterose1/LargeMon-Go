#include "stdafx.h"
#include "stdlib.h"
#include "LargeMonGenerator.h"
#include "LargeMon.h"
#include "Containers.h"
#include <random>

using namespace std;

bool LargeMonGenerator::generateLargeMon()
{
	// Random generation engine
	random_device rd;
	default_random_engine generator(rd());
	// Generate type
	int randIndex = rand() % Containers::types.size();
	string type = Containers::types.at(randIndex);
	// Generate name
	int randPIndex = rand() % sizeof(*Containers::prefix);
	int randSIndex = rand() % sizeof(*Containers::suffix);
	string name = Containers::prefix[randPIndex]+ Containers::suffix[randSIndex];
	// Geneate size
	uniform_real_distribution<double> randSize(1, 5);
	double size = randSize(generator);
	// Generate description
	uniform_real_distribution<double> randDesc(0, Containers::desc.size());
	string desc = name + " that has a very " + Containers::desc.at(int(randDesc(generator)));
	// Generate base attack value
	uniform_real_distribution<double> randAttack(8, 14);
	int attack = int (randAttack(generator));
	// Generate health
	uniform_real_distribution<double> randHealth(80, 120);
	int health = int(randHealth(generator));
	// Generate completed LargeMon, with relevant parameters
	LargeMon* tempMon = new LargeMon(type, name, desc, "W", size, attack, health);
	return true;
}