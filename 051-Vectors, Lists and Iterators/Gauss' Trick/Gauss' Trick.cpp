#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void putDataToList(istringstream & stream, vector<int> &vv) {
    int i;
    while (stream >> i)
        vv.push_back(i);
}

void printVector(const vector<int> &vv) {
    for (int i : vv)
        cout << i << ' ';
}

int main()
{
    string line;
    getline(cin, line);

    istringstream input(line);

    vector <int> numbers;
    vector<int> resultList;

    putDataToList(input, numbers);

    vector<int>::iterator start = numbers.begin();
    vector<int>::iterator end = numbers.end()-1;
    
    while (start <= end) {
        if (start != end)
            resultList.push_back(*start + *end);
        else
            resultList.push_back(*start);

        start++;
        end--;
    }

    printVector(resultList);
    cout << endl;
    return 0;
}
