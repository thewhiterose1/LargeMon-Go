#include "LargeMon.h"
#include <vector>
#include <string>

class AllLargeMons
{
public:
	virtual void foo() = 0;
	static vector<LargeMon> allLargeMons;
	static bool deleteAllLargeMon();
	static bool deleteByName(string);
	static bool nameUnique(string);
};

