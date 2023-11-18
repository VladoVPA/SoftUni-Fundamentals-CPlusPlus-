#include <iostream>
using namespace std;

const int MAX_SIZE = 99;

int sumEvenInArray(int arr[], int X) {
    int evenSum = 0;
    for (int index = 0; index < X; index++)
        if (arr[index] % 2 == 0)
            evenSum += arr[index];

    return evenSum;
}

int main()
{
    int numbers[MAX_SIZE];
    int actualSize;
    cin >> actualSize;

    for (int index = 0; index < actualSize; index++)
        cin >> numbers[index];

    cout << sumEvenInArray(numbers, actualSize) << endl;

    return 0;
}