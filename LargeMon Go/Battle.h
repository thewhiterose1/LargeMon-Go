#include "LargeMon.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>


class Battle
{
public:
	Battle(LargeMon);
	~Battle();
	char turn;
	static int turnCount;
	static bool pCanSpecial;
	static bool eCanSpecial;
	static string turnText;
	LargeMon pLargeMon;
	LargeMon eLargeMon;
	void saveLogFile();
};

