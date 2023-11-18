#include <iostream>
using namespace std;
const int MAX_SIZE = 99;

int main()
{
    int numbers[MAX_SIZE];
    int actualSize;
    cin >> actualSize;

    for (int index = 0; index < actualSize; index++)
        cin >> numbers[index];

    int evenSum = 0;
    int oddSum = 0;

    for (int index = 0; index < actualSize; index++) {
        if (numbers[index] % 2 == 0)
            evenSum += numbers[index];
        else
            oddSum += numbers[index];
    }

    cout << evenSum - oddSum << endl;

    return 0;
}