#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;
	cin.ignore();
	string curentProduct;
	vector<string> productList;
	for (int i = 0; i < N; i++) {
		getline(cin, curentProduct);
		productList.push_back(curentProduct);
	}

	sort(productList.begin(), productList.end()); // sort() function from #include <algorithm> automaticaly check <

	int index = 1;
	for (string i : productList) {
		cout << index << "." << i << endl;
		index++;
	}

	return 0;
}
