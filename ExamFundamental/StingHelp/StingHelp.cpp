#include <iostream>
#include <string>
#include <cctype>


using namespace std;

int main()
{
	string text;
	for (char c : text) {

	}

	char c;
	isalpha(c);
	ispunct(c);  // return true / false if is punctual symbol
	isalnum(c);
	isdigit(c);

	tolower(c);

	int number = c - '0';   // transform a char, witch is digit to a number -> '2' = 2;

	string str;
	int index = str.find("x");  //returns index where x is found


	cout << (char)number;  // transforms a digit to char in the ASCII table

}