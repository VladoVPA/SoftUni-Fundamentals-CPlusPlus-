#include <iostream>
#include <string>
#include <sstream>
#include <list>
using namespace std;

void putDataToList(istringstream& stream, list<int>& list) {
	int i;
	while (stream >> i)
		list.push_back(i);
}

void printList(list<int> listData) {
	list<int> :: iterator pr = listData.begin();
	for (; pr != listData.end(); pr++)
		cout << *pr << ' ';
}

int main()
{
	string line1, line2;
	list <int> list1, list2, listResult;
	getline(cin, line1);
	getline(cin, line2);
	istringstream data1(line1);
	istringstream data2(line2);

	putDataToList(data1, list1);
	putDataToList(data2, list2);

	bool list1IsBigger = false;
	int lenght,count=0;

	if (list1.size() > list2.size()) {
		lenght = list2.size();
		list1IsBigger = true;
	}
	else
	{
		lenght = list1.size();
	}

	list<int> ::iterator it1 = list1.begin();
	list<int> ::iterator it2 = list2.begin();

	while (count < lenght) {
		listResult.push_back(*it1);
		listResult.push_back(*it2);
		count++;
		it1++;
		it2++;
	}
	if (list1IsBigger) {
		while (it1 != list1.end()) {
			listResult.push_back(*it1);
			it1++;
		}
	}
	else {
		while (it2 != list2.end()) {
			listResult.push_back(*it2);
			it2++;
		}
	}
	
	printList(listResult);
	cout << endl;
	return 0;
}