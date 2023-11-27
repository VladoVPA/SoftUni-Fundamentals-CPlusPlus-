#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		char current = input[i];
		char next = input[i + 1];
		if (current == next) {
			input.erase(i, 1);
			i--;
		}

		
	}
	cout << input << endl;
}
