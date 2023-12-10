#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    string line;
    getline(cin, line);

    istringstream input(line);

    int currentValue = 0, previousValue = 0;

    string symbol;
    //int number;
    //string 
    // chars + , *, -or /,
    while (input>> symbol) {
        if (symbol == "+") {
            int tempPlus = previousValue + currentValue;
            previousValue = currentValue;
            currentValue = tempPlus;
        }
        else if (symbol == "*") {
            int tempMult = previousValue * currentValue;
            previousValue = currentValue;
            currentValue = tempMult;
        }
        else if (symbol == "-") {
            int tempMinus = previousValue - currentValue;
            previousValue = currentValue;
            currentValue = tempMinus;
        }
        else if (symbol == "/") {
            int tempDiv = previousValue / currentValue;
            previousValue = currentValue;
            currentValue = tempDiv;
        }
        else{
            //if (input >> number) {
            //if (isdigit(symbol)) {
            int number = stoi(symbol);
            int temp = currentValue;
            currentValue = number;
            previousValue = temp;
          //  }
        }
    }

    //, you should print the two values: current value and previous value.
    cout <<currentValue << ' ' << previousValue;

    cout << endl;
    return 0;
}
