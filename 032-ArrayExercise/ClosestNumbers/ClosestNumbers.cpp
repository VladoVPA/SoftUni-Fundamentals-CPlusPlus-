#include <iostream>
#include <climits>
using namespace std;

const int MAX_SIZE = 99;

void readArreay(int arr[], int& size) {
    cin >> size;

    for (size_t ind = 0; ind < size; ind++)
        cin >> arr[ind];
}

int main()
{
    int array[MAX_SIZE] = {};
    int arrSize;

    readArreay(array, arrSize);

    int minDiff;

    if (arrSize == 1)
        minDiff = 0;
    else
        minDiff = INT_MAX;

    for (int i = 0; i < arrSize; i++) {
        for (int j = i + 1; j < arrSize; j++) {
            int currDiff = abs(array[i] - array[j]);
            if (currDiff < minDiff)
                minDiff = currDiff;
        }
    }

    cout << minDiff << endl;

    return 0;
}