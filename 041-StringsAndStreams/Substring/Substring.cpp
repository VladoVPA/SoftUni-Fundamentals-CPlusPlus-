#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string firstL, secondL;
	getline(cin, firstL);
	getline(cin, secondL);

	int sizeDel = firstL.size();

	while (true) {
		int index = secondL.find(firstL);
		if (index == string::npos)
			break;

		secondL.erase(index, sizeDel);

	}

	cout << secondL << endl;

}
