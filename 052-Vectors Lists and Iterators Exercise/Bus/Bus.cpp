#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int convertToMinutes(string str) {
	str.insert(2, " ");

	istringstream input(str);
	int hour, min;
	input >> hour >> min;

	return hour * 60 + min;
}

void putStringsToVector(string str, vector<string> &vv) {
	istringstream stream(str);
	string current;
	while (stream >> current)
		vv.push_back(current);
}

int main()
{
	int N;
	cin >> N;
	cin.ignore();

	string busLine;
	getline(cin, busLine);
	vector<string> busTimes;
	putStringsToVector(busLine, busTimes);

	string trainTime;
	cin >> trainTime;

	int trainTimeInMinutes = convertToMinutes(trainTime);

	vector<string> ::iterator it = busTimes.begin();
	int minimalPosition = 0;
	int currentdiff = trainTimeInMinutes - convertToMinutes(*it);

	for (size_t index = 1; index < N; index++) {
		it = busTimes.begin() + index;
		if ((trainTimeInMinutes - convertToMinutes(*it)) < currentdiff && (trainTimeInMinutes - convertToMinutes(*it)) >= 0) {
			currentdiff = trainTimeInMinutes - convertToMinutes(*it);
			minimalPosition = index;
		}
		
	}

	cout << minimalPosition +1 << endl;
	
	return 0;
}
