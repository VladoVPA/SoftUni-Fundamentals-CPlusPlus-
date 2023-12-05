#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

void putNumIntsInVector(string line, vector<int> &vv) {
    istringstream str(line);
    size_t i;
    while(str >> i)
        vv.push_back(i);
}

void printVector(vector<int> vv) {
    for (size_t i : vv)
        cout << i << ' ';
}

int main()
{
    size_t N;
    cin >> N;
    cin.ignore();

    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    vector<int> checkup;
    checkup.reserve(N);
    putNumIntsInVector(line1, checkup);
    vector<int> installation;
    installation.reserve(N);
    putNumIntsInVector(line2, installation);

    vector<int> result;
    result.reserve(N);

    vector<int> ::iterator itc = checkup.begin();
    vector<int> ::iterator iti = installation.begin();
    
    for (size_t i = 0; i < N; i++, itc++, iti++) {
        size_t years = 1 + (*itc) / (*iti - *itc);
        result.push_back(years);
    }

    printVector(result);
    cout << endl;
    return 0;
}
