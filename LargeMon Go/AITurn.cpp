#include "stdafx.h"
#include "AITurn.h"
#include "Battle.h"


AITurn::AITurn(LargeMon &nmLargeMon, LargeMon &neLargeMon) : Turn(nmLargeMon, neLargeMon)
{
	LargeMon* mLargeMon = &nmLargeMon;
	LargeMon* eLargeMon = &neLargeMon;
	if (mLargeMon->getHealth() < 0) return;
	Battle::turnText.append("AI Health: " + to_string(mLargeMon->getHealth()) + " - AI Action: ");
	// If AI can do special attack, prioritise it
	if (Battle::eCanSpecial) { 
		Battle::turnText.append("Special Attack\n");
		specialAttack(*mLargeMon, *eLargeMon);
		Battle::eCanSpecial = false;
		return;
	}
	// If AI WILL die from enemies simple attack next turn, heal
	if (mLargeMon->getHealth() - eLargeMon->getAttackPoints() <= 0)
	{
		Battle::turnText.append("Defence\n");
		defence(*mLargeMon);
		return;
	}
	// Else AI should do base attack
	simpleAttack(*mLargeMon, *eLargeMon);
	Battle::turnText.append("Simple Attack\n");
}


AITurn::~AITurn()
{
}