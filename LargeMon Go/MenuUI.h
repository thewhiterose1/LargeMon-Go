#pragma once

#include <iostream>
#include <string>

class MenuUI
{
public:
	MenuUI();
	~MenuUI();
	// For singleton, contains reference to main menu object
	static MenuUI theMenu;
	// Main Menu function
	void mainMenu();
	// Displays all LargeMons generated description
	void viewLargeMons();
	// Displays the battle setup screen
	void battleMenu();
};

