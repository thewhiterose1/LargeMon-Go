#pragma once
#include "LargeMon.h"
#include <iostream>
#include <random>

class Turn
{
public:
	// Constructor and destructor
	Turn(LargeMon &, LargeMon &);
	~Turn();
	// Storing LargeMons on given turn
	LargeMon* mLargeMon;
	LargeMon* eLargeMon;
	// Possible actions
	void simpleAttack(LargeMon &, LargeMon &);
	void specialAttack(LargeMon &, LargeMon &);
	void defence(LargeMon &);
};

