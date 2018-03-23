#include "stdafx.h"
#include "PTurn.h"
#include "LargeMon.h"


// Derived class of Turn for handling player input and performing attacks requested by the player.

PTurn::PTurn(LargeMon &nmLargeMon, LargeMon &neLargeMon) : Turn(nmLargeMon, neLargeMon)
{
	cout << "\nIt's your turn! What move would you like to do?\n\n";
	cout << "1. Simple Attack\n";
	cout << "2. Defence\n";
	cout << "3. Special Attack\n";
	LargeMon* mLargeMon = &nmLargeMon;
	LargeMon* eLargeMon = &neLargeMon;
	char input;
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.sync();
	switch (input) {
		case '1':
			simpleAttack(*mLargeMon, *eLargeMon);
			break;
		case '2':
			defence(*mLargeMon);
			break;
		case '3':
			specialAttack(*mLargeMon, *eLargeMon);
			break;
		default:
			cout << "Invalid command!";
	}
}


PTurn::~PTurn()
{
}