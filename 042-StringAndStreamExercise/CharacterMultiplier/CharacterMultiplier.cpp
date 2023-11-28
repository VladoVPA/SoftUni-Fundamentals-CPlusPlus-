#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text1, text2;
	cin >> text1 >> text2;
	int lenght, totalSum=0;

	if (text1.size() > text2.size())
		lenght = text1.size();
	else
		lenght = text2.size();
	
	int c1, c2;

	for (int i = 0; i < lenght; i++) {
		if (i < text1.size())
			c1 = text1[i];
		else
			c1 = 1;

		c2 = (i < text2.size() ? text2[i] : 1);

		totalSum =totalSum + (c1 * c2);
	}

	cout << totalSum << endl;
	return 0;
}
