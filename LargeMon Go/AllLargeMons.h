#include "LargeMon.h"
#include <vector>
#include <string>

class AllLargeMons
{
public:
	virtual void foo() = 0; // Designates abstract class
	static vector<LargeMon> allLargeMons;
	static bool deleteAllLargeMon();
	static bool deleteByName(string);
	static bool nameUnique(string);
	static bool noLargeMons();
};

