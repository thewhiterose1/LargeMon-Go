#include "stdafx.h"
#include "Battle.h"
#include "AllLargeMons.h"

using namespace std;

char turn = 'P';
int turnCount = 1;

// Constructor
Battle::Battle(LargeMon npLargeMon)
{
	system("CLS");
	cout << "\t\t -- LARGEMON BATTLE --\n\n";
	cout << "Let the battle begin!\n\n";
	// Initialising player, enemy LargeMon
	LargeMon pLargeMon = npLargeMon;
	LargeMon eLargeMon = AllLargeMons::selectRandLargeMon();
	cout << "\nYOUR LARGEMON: " + pLargeMon.getDescription();
	cout << "\nENEMY LARGEMON: " + eLargeMon.getDescription();

	while (pLargeMon.getHealth() >= 0 && eLargeMon.getHealth() >= 0)
	{

	}
	int i;
	cin >> i;
}

// Destructor
Battle::~Battle()
{
}
