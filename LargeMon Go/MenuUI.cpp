#include "stdafx.h"
#include "MenuUI.h"
#include "LargeMonGenerator.h"
#include "AllLargeMons.h"
#include "Battle.h"

using namespace std;

MenuUI MenuUI::theMenu;

// Constuctor, immediately calls mainMenu UI function
MenuUI::MenuUI()
{
	theMenu = *this;
	mainMenu();
}

// The main menu
void MenuUI::mainMenu()
{
	system("CLS");
	cout << "Welcome to LargeMon Go!\n\n";
	cout << "\t-- MAIN MENU --\n";
	cout << "1. Generate New LargeMon\n";
	cout << "2. View My LargeMons\n";
	cout << "3. Play Battle\n";
	cout << "4. Quit\n";
	char input;
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.sync();
	// Management of the options available
	switch (input)
	{
		case '1':
			if (LargeMonGenerator::generateLargeMon() == false) cout << "Error!\n";
			mainMenu();
		case '2':
			viewLargeMons();
		case '3': 
			battleMenu();
		case '4': 
			exit(0);
		default:
			cout << "Sorry - your command was not recognised. Try again.";
			mainMenu();
	}
}

void MenuUI::viewLargeMons()
{
	system("CLS");
	cout << "\t\t -- YOUR LARGEMONS --\n\n";
	cout << "If you wish to delete a LargeMon, simply press the corresponding number\n\n";
	int count = 0; // Used to synchronise positions of LargeMons in list
	for (LargeMon ele : AllLargeMons::allLargeMons)
	{
		count++;
		cout << to_string(count) + ". " + ele.getDescription() + "\n";
	}
	cout << "\nIf you wish to delete a particular LargeMon, press the number corresponding to that LargeMon.\n\n";
	cout << "\nTo go back to the main Menu press 0!";
	char input;
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.sync();
	// Returns to main menu
	if (input == '0') mainMenu();
	// Determines whether user is trying to delete a LargeMon, or indicates an invalid command was entered
	try {
		int indexDel = input - '0';
		if (indexDel <= count && indexDel > 0)
		{
			AllLargeMons::deleteByName(AllLargeMons::allLargeMons[indexDel-1].getName());
		}
		viewLargeMons();
	}
	catch (int e)
	{
		cout << "Sorry - your command was not recognised. Try again.";
	}
}

// Menu interface for setting up a battle against the AI
void MenuUI::battleMenu()
{
	system("CLS");
	cout << "\t\t -- PLAY BATTLE --\n\n";
	cout << "You have chosen to play a battle! Pick the LargeMon YOU wish to fight with below by pressing the corresponding number key!\n\n";
	int count = 0;
	for (LargeMon ele : AllLargeMons::allLargeMons)
	{
		count++;
		cout << to_string(count) + ". " + ele.getDescription() + "\n";
	}
	cout << "\nTo go back to the main Menu press 0!";
	char input;
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.sync();
	if (input == '0') mainMenu();
	// If the user has selected a valid LargeMon, setup a Battle against a random LargeMon AI
	try {
		int indexLargeMon = input - '0';
		if (indexLargeMon <= count && indexLargeMon > 0)
		{
			Battle* battle = new Battle(AllLargeMons::allLargeMons[indexLargeMon - 1]);
		}
	}
	catch (int e)
	{
		cout << "Sorry - your command was not recognised. Try again.";
	}
}

// Destructor
MenuUI::~MenuUI()
{
}