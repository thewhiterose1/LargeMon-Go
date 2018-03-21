#pragma once
#include "LargeMon.h"
#include <string>

class LargeMonGenerator
{
public:
	// Types of LargeMon to act as suffix when generating name
	string prefix[3] = {"Hydro", "Air", "Fire"};
	// A collection of suffixes to be appended to LargeMon's suffix upon generation
	string suffix[1] = {""};
	LargeMonGenerator();
	~LargeMonGenerator();
	static bool generateLargeMon();
};

