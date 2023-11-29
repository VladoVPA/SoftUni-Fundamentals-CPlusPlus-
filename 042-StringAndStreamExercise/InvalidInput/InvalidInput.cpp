#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main()
{
	string inputLine;
	getline(cin, inputLine);

	istringstream buffer(inputLine);
	ostringstream resultWords;
	int sum=0;
	string word;

	while (buffer >> word){
		if(isalpha(word[0]))
			resultWords << word << ' ';
		else
			sum += stoi(word);
			
	}
	cout << sum << endl << resultWords.str()<< endl;

	return 0;

}
