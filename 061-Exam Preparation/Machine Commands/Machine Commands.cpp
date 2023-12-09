#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> vv) {
    for (int n : vv)
        cout << n << endl;
}

int main()
{
    vector<int> numbers;
    string operation;
    int curNum;

    while (true) {
        cin >> operation;
        if (operation == "end") break;
        else if (operation == "sum") {
            int a = *(numbers.end() - 1);
            int b = *(numbers.end() - 2);
            int sum = a + b;
            numbers.insert(numbers.end() - 2, sum);
            numbers.erase(numbers.end() - 1);
            numbers.erase(numbers.end() - 1);
        }
        else if (operation == "subtract") {
            int a = *(numbers.end() - 1);
            int b = *(numbers.end() - 2);
            int subtract = a - b;
            numbers.insert(numbers.end() - 2, subtract);
            numbers.erase(numbers.end() - 1);
            numbers.erase(numbers.end() - 1);
            
        }
        else if (operation == "concat") {
            string c2 = to_string(*(numbers.end() - 1));
            string c1 = to_string (*(numbers.end() - 2));      
            string numTxt = c1+c2;

            int numDigit = stoi(numTxt);
            numbers.insert(numbers.end() - 2, numDigit);
            
            numbers.erase(numbers.end() - 1);
            numbers.erase(numbers.end() - 1);
        }
        else if (operation == "discard") {
            numbers.erase(numbers.end() - 1);
        }
        else {
            curNum = stoi(operation);
            numbers.push_back(curNum);

        }
    }

    printVector(numbers);

    cout << endl;
    return 0;
}
