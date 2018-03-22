#include "stdafx.h"
#include "MenuUI.h"
#include "LargeMonGenerator.h"
#include "AllLargeMons.h"

using namespace std;

// Constuctor, immediately calls mainMenu UI function
MenuUI::MenuUI()
{
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
	int input;
	cin >> input;
	// Management of the options available
	switch (input)
	{
		case 1: 
			if (LargeMonGenerator::generateLargeMon() == false) cout << "Error!\n";
			MenuUI::mainMenu();
		case 2:
			MenuUI::viewLargeMons();
		case 3: 
			cout << "Battle";
		case 4: 
			exit(0);
		default:
			cout << "Sorry - your command was not recognised. Try again.";
			MenuUI::mainMenu();
	}
}

void MenuUI::viewLargeMons()
{
	system("CLS");
	cout << "\t\t -- YOUR LARGEMONS --\n\n";
	cout << "If you wish to delete a LargeMon, simply press the corresponding number\n";
	for (LargeMon ele : AllLargeMons::allLargeMons)
	{
		cout << ele.getDescription() + "\n";
	}
	cout << "\nTo go back to the main Menu press 0!";
	int input;
	cin >> input;
	switch (input) {
		case 0:
			MenuUI:mainMenu();
	}
}

// Destructor
MenuUI::~MenuUI()
{
}