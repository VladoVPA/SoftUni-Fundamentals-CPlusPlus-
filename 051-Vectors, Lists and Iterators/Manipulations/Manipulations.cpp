#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void putDataToVector(istream& stream, vector<int>& vv) {
	string line;
	getline(stream, line);

	istringstream input(line);

	int i;
	while (input >> i) {
		vv.push_back(i);
		i++;
	}
}

/*void putDataToVector(istringstream & stream, vector<int> &vv) {
	int i;
	while (stream >> i) {
		vv.push_back(i);
		i++;
	}
}*/

void printVector(const vector<int>& vv) {
	for (int n : vv)
		cout << n << ' ';
}

void insertFunction(vector<int>& vv, int num, int ind) {
	vv.insert(vv.begin() + ind, num);
}

int main()
{
	//string line;
	//getline(cin, line);
	//istringstream input(line);
	vector<int> numbers;

	putDataToVector(cin, numbers);

	while (true) {
		string operation;
		cin >> operation;
		if (operation == "end") {
			printVector(numbers);
			break;
		}
		else if (operation == "Add") {
			int number;
			cin >> number;
			numbers.push_back(number);
		}
		else if (operation == "Remove") {
			int number;
			cin >> number;
			vector<int>::iterator it = numbers.begin();
			for (; it != numbers.end(); it++)
				if (*it == number) {
					numbers.erase(it);
					break;
				}
		}
		else if (operation == "RemoveAt") {
			int index;
			cin >> index;
			numbers.erase(numbers.begin() + index);
		}
		else if (operation == "Insert") {
			int number, index;
			cin >> number >> index;
			insertFunction(numbers, number, index);
		}
	}
	cout << endl;
	return 0;
}
