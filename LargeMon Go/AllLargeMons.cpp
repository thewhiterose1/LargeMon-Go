#include "stdafx.h"
#include "AllLargeMons.h"
#include "LargeMon.h"

using namespace std;

// Initialisaing the vector that will contain all LargeMons
vector<LargeMon> AllLargeMons::allLargeMons;

// Deletes all LargeMons
bool AllLargeMons::deleteAllLargeMon()
{
	AllLargeMons::allLargeMons.clear();
	return true;
}

// Deletes all LargeMons by a name passed through a single parameter, uses a numeric iterator due to problems with object comparison
bool AllLargeMons::deleteByName(string name)
{
	for (auto it = AllLargeMons::allLargeMons.begin(); it != AllLargeMons::allLargeMons.end(); ++it)
	{
		int index = distance(AllLargeMons::allLargeMons.begin(), it);
		string currName = AllLargeMons::allLargeMons[index].getName();
		if (name == currName)
		{
			AllLargeMons::allLargeMons.erase(AllLargeMons::allLargeMons.begin() + index);
			return true;
		}
	}
	return false;
}

// Checks to see if a name is unique based on a passed parameter, uses a numeric iterator due to problems with object comparison
bool AllLargeMons::nameUnique(string name)
{
	for (auto it = AllLargeMons::allLargeMons.begin(); it != AllLargeMons::allLargeMons.end(); ++it)
	{
		int index = distance(AllLargeMons::allLargeMons.begin(), it);
		string currName = AllLargeMons::allLargeMons[index].getName();
		if (name == currName) return false;
	}
	return true;
}

bool AllLargeMons::noLargeMons()
{
	if (AllLargeMons::allLargeMons.empty())
	{
		return true;
	}
	return false;
}