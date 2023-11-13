#include <iostream>
using namespace std;

long long collectEvenFromNumber(int x);
long long collectOddFromNumber(int x);

int main()
{
    int number;
    cin >> number;

    number = abs(number);
    double result = collectEvenFromNumber(number) * collectOddFromNumber(number);

    cout << result << endl;
    //cout << collectEvenFromNumber(number) << endl;
    //cout << collectOddFromNumber(number) << endl;
}

long long collectEvenFromNumber(int x) {
    int sumEven = 0;

    int number = x % 10;
    int current = x / 10;

    while (current > 0 || number >0) {

        if (number % 2 == 0)
            sumEven += number;

        number = current % 10;
        current = current / 10;
     }

    return sumEven;
}
long long collectOddFromNumber(int x) {
    int sumOdd = 0;

    int number = x % 10;
    int current = x / 10;

    while (current > 0 || number > 0) {

        if (number % 2 != 0)
            sumOdd += number;

        number = current % 10;
        current = current / 10;
    }

    return sumOdd;
}
