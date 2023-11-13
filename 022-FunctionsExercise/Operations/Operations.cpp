#include <iostream>
using namespace std;

int sum(int x, int y) {
    return x + y;
}
int supstraction(int x, int y) {
    return x - y;
}
int multiplication(int x, int y) {
    return x * y;
}
double division(int x, int y) {
    return 1.0 * x / y;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    char operation;
    cin >> operation;

    if (operation == '+') {
        cout << sum(num1, num2) << endl;
    }
    else if (operation == '-') {
        cout << supstraction(num1, num2) << endl;
    }
    else if (operation == '*') {
        cout << multiplication(num1, num2) << endl;
    }
    else if (operation == '/') {
        cout << division(num1, num2) << endl;
    }

    return 0;
}
