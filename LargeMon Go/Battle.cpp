#include "stdafx.h"
#include "Battle.h"
#include "AllLargeMons.h"
#include "MenuUI.h"
#include "PTurn.h"
#include "AITurn.h"

using namespace std;

char turn = 'P';
int Battle::turnCount = 1;
bool Battle::eCanSpecial = false;
bool Battle::pCanSpecial = false;
string Battle::turnText = "";

// Constructor
Battle::Battle(LargeMon npLargeMon)
{
	system("CLS");
	cout << "\t\t -- LARGEMON BATTLE --\n\n";
	cout << "Let the battle begin!\n\n";
	// Initialising player, enemy LargeMon
	LargeMon pLargeMon = npLargeMon;
	LargeMon eLargeMon = AllLargeMons::selectRandLargeMon();
	if (pLargeMon.getType() == eLargeMon.getAntagonist()) Battle::pCanSpecial = true; 
	if (eLargeMon.getType() == pLargeMon.getAntagonist()) Battle::eCanSpecial = true;
	cout << "\nYOUR LARGEMON: " + pLargeMon.getDescription();
	cout << "\nENEMY LARGEMON: " + eLargeMon.getDescription();

	// While neither LargeMon is dead, repeat turns
	while (pLargeMon.getHealth() >= 0 && eLargeMon.getHealth() >= 0)
	{
		Battle::turnText = "Turn: " + to_string(Battle::turnCount) + "\n";
		PTurn* pTurn = new PTurn(pLargeMon, eLargeMon);
		AITurn* eTurn = new AITurn(eLargeMon, pLargeMon);
		cout << Battle::turnText;
		saveLogFile();
		Battle::turnCount += 1;
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
	ofstream logFile;
	logFile.open("test.txt", std::ios::out | std::ios::app);
	logFile << Battle::turnText << std::endl;
}

// Destructor
Battle::~Battle()
{
}