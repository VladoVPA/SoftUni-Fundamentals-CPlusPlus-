#include <iostream>
using namespace std;

const int MAX_SIZE = 99;

void readArreay(int arr[], int& size) {
    cin >> size;

    for (size_t ind = 0; ind < size; ind++)
        cin >> arr[ind];
}

void printArray(int arr[], int size, string spacer = " ") {
    for (int c = 0; c < size; c++)
        cout << arr[c] << spacer;
}


int main()
{
    int array[MAX_SIZE] = {};
    int arrSize;

    readArreay(array, arrSize);

    int numRotation;
    cin >> numRotation;

    for (int j = 1; j <= numRotation; j++) {
        int temp = array[0];
        for (int ind = 0; ind < arrSize - 1; ind++) {
            array[ind] = array[ind + 1];
        }
        array[arrSize - 1] = temp;
    }
    printArray(array, arrSize);
}