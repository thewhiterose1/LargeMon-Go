#include "stdafx.h"
#include "AITurn.h"


AITurn::AITurn(LargeMon &nmLargeMon, LargeMon &neLargeMon) : Turn(nmLargeMon, neLargeMon)
{
	cout << "\nIt's the AI's turn!";
	LargeMon* mLargeMon = &nmLargeMon;
	LargeMon* eLargeMon = &neLargeMon;
	simpleAttack(*mLargeMon, *eLargeMon);
	cout << "AI used Simple Attack!\n";
}


AITurn::~AITurn()
{
}
