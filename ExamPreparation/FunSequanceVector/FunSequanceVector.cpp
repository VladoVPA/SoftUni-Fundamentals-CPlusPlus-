#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printVector(vector<int> vv) {
	for (int i : vv)
		cout << i << ' ';
}

bool myfunction(int i, int j) { return (i >= j); }

int main()
{
	int N, average = 0;
	cin >> N;

	if (N <= 0) {
		cout << "No" << endl;
		return 0;
	}

	vector <int> numbers;
	numbers.reserve(N);

	for (size_t i = 0; i < N; i++) {
		int num;
		cin >> num;
		numbers.push_back(num);
		average += num;
	}

	average = average / N;

	vector <int> ::iterator it = numbers.begin();
	for (; it != numbers.end(); ) {
		if (*it % 2 != 0 || *it >= average)
			it = numbers.erase(it);
		else
			it++;
	}

	if (numbers.size() == 0) {
		cout << "No" << endl;
		return 0;
	}
	else {
		sort(numbers.begin(), numbers.end(), myfunction);
	}

	printVector(numbers);

	cout << endl;
	return 0;
}
