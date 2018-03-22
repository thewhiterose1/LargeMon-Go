#include "LargeMon.h"
#include <random>

class LargeMonGenerator
{
public:
	virtual void foo() = 0;
	static bool generateLargeMon();
};