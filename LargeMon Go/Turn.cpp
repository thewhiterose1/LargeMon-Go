#include "stdafx.h"
#include "Turn.h"

using namespace std;

// Constructor
Turn::Turn(LargeMon &nmLargeMon, LargeMon &neLargeMon)
{
	LargeMon* mLargeMon = &nmLargeMon;
	LargeMon* eLargeMon = &neLargeMon;
}

// The three moves that can be undertaken
void Turn::simpleAttack(LargeMon &mLargeMon, LargeMon &eLargeMon)
{
	// Adds an effectiveness to the attack dealt
	random_device rd;
	default_random_engine generator(rd());
	uniform_real_distribution<double> attackEffect(0.90, 1.10);
	// Random double between 0.90 and 1.10 * base attack of turn takers LargeMon
	eLargeMon.doDamage(int(attackEffect(generator) * mLargeMon.getAttackPoints()));
}

void Turn::specialAttack(LargeMon &mLargeMon, LargeMon &eLargeMon)
{
	// Adds an effectiveness to the attack dealt
	random_device rd;
	default_random_engine generator(rd());
	uniform_real_distribution<double> attackEffect(0.95, 1.50);
	// Random double between 0.95 and 1.50 * base attack of turn takers LargeMon
	eLargeMon.doDamage(int(attackEffect(generator) * mLargeMon.getAttackPoints()));
}

void Turn::defence(LargeMon &mLargeMon)
{
	// Heals the turn takers LargeMon, negative value will cause healing due to --
	mLargeMon.doDamage(-10);
}

// Destructor
Turn::~Turn()
{
}