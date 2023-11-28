
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	getline(cin, input);

	int countOpen = 0, countClose = 0;
	//if (input.find('(') > input.find(')')) {
	//	cout << "incorrect" << endl;
	//		return 0;
	//}
	for (char c : input) {
		if (c == '(')
			countOpen++;
		if (c == ')')
			countClose++;
	}

	if(countOpen == countClose)
		cout << "correct" << endl;
	else
		cout << "incorrect" << endl;


	return 0;
}
