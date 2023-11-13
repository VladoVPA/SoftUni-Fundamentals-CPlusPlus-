#include <iostream>
#include <string.h>
using namespace std;
using std::string;

int findVowelsInText(string text);

int main()
{
	string text;
	cin >> text;

	cout << findVowelsInText(text) << endl;
}

int findVowelsInText(string text) {
	int l = text.size();
	int vowelsSum = 0;
	for (int i = 0; i < l; i++) {
		char currentLetter = text[i];
		if (currentLetter == 'a' || currentLetter == 'A' || currentLetter == 'o' || currentLetter == 'O'
			|| currentLetter == 'e' || currentLetter == 'E' || currentLetter == 'i' || currentLetter == 'I'
			|| currentLetter == 'u' || currentLetter == 'U')
			vowelsSum += 1;
	}
	return vowelsSum;
}
