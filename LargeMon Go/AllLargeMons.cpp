#include "stdafx.h"
#include "AllLargeMons.h"
#include "LargeMon.h"

using namespace std;

// Initialising the vector that will contain all LargeMons
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

// Can be used to check if there are no currently generated LargeMons
bool AllLargeMons::noLargeMons()
{
	if (AllLargeMons::allLargeMons.empty())
	{
		return true;
	}
	return false;
}

// Returns a random LargeMon from the list
LargeMon AllLargeMons::selectRandLargeMon()
{
	// Random generation engine
	random_device rd;
	default_random_engine generator(rd());
	// Generate type
	uniform_real_distribution<double> randLargeMon(0, AllLargeMons::allLargeMons.size());
	return AllLargeMons::allLargeMons.at(int(randLargeMon(generator)));
}