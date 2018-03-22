#include "stdafx.h"
#include "Containers.h"
#include <string>

// Initialising static data structures 
const vector<string> Containers::types = { "Hydro", "Fire", "Wood" };
const vector<string> Containers::prefix = { "Hydro", "Flame", "Forest" };
const vector<string> Containers::suffix = { "fy", "ing", "ation", "fig", "monster", "born", "fleeg", "git", "libe", "leev" };
const vector<string> Containers::desc = {"old", "intimidating", "powerful", "weak", "scared", "meagre", "young"};
const map<string, string> Containers::antagonists = { 
	{"Fire", "Hydro"},
	{"Wood", "Fire"},
	{"Hydro", "Wood"}
};