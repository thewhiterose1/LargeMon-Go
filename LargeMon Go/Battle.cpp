#include "stdafx.h"
#include "Battle.h"
#include "AllLargeMons.h"
#include "MenuUI.h"
#include "Turn.h"

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

	cout << eLargeMon.getHealth();
	// While neither LargeMon is dead, repeat turns
	while (pLargeMon.getHealth() >= 0 && eLargeMon.getHealth() >= 0)
	{
		cout << "Pew pew\n";
		Turn* pTurn = new Turn(pLargeMon, eLargeMon);
	}
	// Determine winner and return to main menu
	if (pLargeMon.getHealth() <= 0)
	{
		cout << "\n\nYou have lost!";
	}
	else
	{
		cout << "\n\nYou have won!";
	}
	char input;
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.sync();
	MenuUI::theMenu.mainMenu();
}

// Output relevant information to log file
void Battle::saveLogFile()
{

}

// Destructor
Battle::~Battle()
{
}
