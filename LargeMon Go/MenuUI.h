#pragma once

#include <iostream>
#include <string>

class MenuUI
{
public:
	MenuUI();
	~MenuUI();
	// Main Menu function
	void mainMenu();
	// Displays all LargeMons generated description
	void viewLargeMons();
	// Displays the battle setup screen
	void battleMenu();
};

