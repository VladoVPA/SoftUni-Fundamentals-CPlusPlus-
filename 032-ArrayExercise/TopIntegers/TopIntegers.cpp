#include <iostream>
using namespace std;

const int MAX_SIZE = 99;

void readArreay(int arr[], int& size) {
    cin >> size;

    for (size_t ind = 0; ind < size; ind++)
        cin >> arr[ind];
}

bool YesTopInteger(int num, int arr[], int arrSize, int startFrom = 0) {
    for (int i = startFrom; i <arrSize; i++)
        if (num <= arr[i])
            return false;

    return true;
}

int main()
{
    int array[MAX_SIZE] = {};
    int arrSize;

    readArreay(array, arrSize);

    for (int index = 0; index < arrSize; index++) {
        if (YesTopInteger(array[index], array, arrSize, index + 1))
            cout << array[index] << ' ';
    }

    return 0;

}