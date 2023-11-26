#include <iostream>
#include <string>
#include <ostream>
#include <sstream>

using namespace std;

string reverseFunction(const string & str) {
	size_t i = str.size() - 1;
	string reverced;
	for (;;) {
		reverced += str[i];
		
		if (i)
			i--;
		else
			break;
	}

	return reverced;
}

int main()
{
	ostringstream resultReverse;
	

	while (true)
	{
		string currentWord;
		cin >> currentWord;
		if (currentWord == "end")
			break;

		resultReverse << currentWord << " = " << reverseFunction(currentWord) << endl;
	}
		
	cout << resultReverse.str() << endl;
}
