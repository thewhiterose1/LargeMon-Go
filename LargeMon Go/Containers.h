#include <vector>
#include <map>
#include <string>

using namespace std;

class Containers
{
public:
	virtual void foo() = 0;
	// Types of LargeMon to act as prefix when generating name
	static const vector<string> prefix;
	// A collection of suffixes to be appended to LargeMon's prefix upon generation
	static const vector<string> suffix;
	// A vector contianing all possible LargeMon types
	static const vector<string> types;
	// A vector containing all description endings
	static const vector<string> desc;
	// A map containing types of LargeMon and their respective antagonists
	static const map<string, string> antagonists;
};