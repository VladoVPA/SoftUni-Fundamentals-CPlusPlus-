#include <iostream>
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

    for (int i = 0; i < arrSize; i++) {
        for (int j = 0; j < arrSize; j++)
            cout << array[i] * array[j] << ' ';
    }

    cout << endl; 
}
