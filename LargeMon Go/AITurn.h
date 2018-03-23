#pragma once
#include "Turn.h"
class AITurn :
	public Turn
{
public:
	AITurn(LargeMon &nmLargeMon, LargeMon &neLargeMon);
	~AITurn();
};

