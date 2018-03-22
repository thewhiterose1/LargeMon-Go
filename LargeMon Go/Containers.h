#pragma once

#include <string>

using namespace std;

class Containers
{
public:
	Containers();
	~Containers();
	// Types of LargeMon to act as suffix when generating name
	string prefix[3] = { "Hydro", "Air", "Fire" };
	// A collection of suffixes to be appended to LargeMon's prefix upon generation
	string suffix[10] = { "fy", "ing", "ation", "fig", "monster", "born", "fleeg", "git", "libe", "leev" };
};

