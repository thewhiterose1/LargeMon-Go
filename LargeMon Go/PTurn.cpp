#include "stdafx.h"
#include "PTurn.h"
#include "LargeMon.h"
#include "Battle.h"


// Derived class of Turn for handling player input and performing attacks requested by the player.

PTurn::PTurn(LargeMon &nmLargeMon, LargeMon &neLargeMon) : Turn(nmLargeMon, neLargeMon)
{
	LargeMon* mLargeMon = &nmLargeMon;
	LargeMon* eLargeMon = &neLargeMon;
	if (mLargeMon->getHealth() < 0) return;
	cout << "\nIt's your turn! What move would you like to do?\n\n";
	cout << "1. Simple Attack\n";
	cout << "2. Defence\n";
	if (Battle::pCanSpecial == true) { cout << "3. Special Attack\n"; }
	char input;
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.sync();
	Battle::turnText.append("Player Health: " + to_string(mLargeMon->getHealth()) + " - Player Action: ");
	switch (input) {
		case '1':
			Battle::turnText += "Simple Attack\n";
			simpleAttack(*mLargeMon, *eLargeMon);
			break;

		case '2':
			Battle::turnText += "Defence\n";
			defence(*mLargeMon);
			break;
		case '3':
			if (Battle::pCanSpecial == true) {
				Battle::turnText += "Special Attack\n";
				specialAttack(*mLargeMon, *eLargeMon);
				Battle::pCanSpecial = false;
				break;
			}
		default:
			Battle::turnText += "Invalid Move\n";
			cout << "Invalid command! The AI gets a free turn!";
	}
}


PTurn::~PTurn()
{
}