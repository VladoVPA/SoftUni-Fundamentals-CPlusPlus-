#include <iostream>
#include <string>
#include <ostream>
#include <sstream>

using namespace std;

void reverseFunction(const string& str, ostringstream& ostr) {
	size_t i = str.size() - 1;
	for (;;) {
		ostr << str[i];

		if (i)
			i--;
		else
			break;
	}
}

int main()
{
	ostringstream resultReverse;
	
	while (true) {
		string currentWord;
		cin >> currentWord;
		
		if (currentWord == "end")
			break;

		resultReverse << currentWord << " = ";
		reverseFunction(currentWord, resultReverse);
		resultReverse << endl;
	}

	cout << resultReverse.str() << endl;
}
