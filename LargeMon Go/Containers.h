#include <string>
#include <vector>

using namespace std;

class Containers
{
public:
	virtual void foo() = 0;
	// Types of LargeMon to act as suffix when generating name
	static const string prefix[3];
	// A collection of suffixes to be appended to LargeMon's prefix upon generation
	static const string suffix[10];
	// A vector contianing all possible LargeMon types
	static const vector<string> types;
	// A vector containing all description endings
	static const vector<string> desc;
};