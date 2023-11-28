#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void replaceWordFunc(string & str, string fWord, string rWord) {
	ostringstream currentText;
	string buffer = str;
	int fWl = fWord.size();
	
	while (true) {
		int index = buffer.find(fWord);
		if (buffer.find(fWord) == string::npos) {
			currentText << buffer;
			break;
		}
		else {
			currentText << buffer.substr(0, index) << rWord;
			buffer.erase(0, index + fWl);
		}
	}
	str = currentText.str();
	
}

int main()
{
	string sentence, firstWord, replaceWord;
	getline(cin, sentence);
	getline(cin, firstWord);
	getline(cin, replaceWord);

	replaceWordFunc(sentence, firstWord, replaceWord);

	cout << sentence << endl;
	return 0;
}