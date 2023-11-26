#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string firstL, secondL;
	cin >> firstL >> secondL;
		
	for (int index; (index = secondL.find(firstL)) != string::npos;) // not found
			secondL.erase(index, firstL.size());

	cout << secondL << endl;

}
