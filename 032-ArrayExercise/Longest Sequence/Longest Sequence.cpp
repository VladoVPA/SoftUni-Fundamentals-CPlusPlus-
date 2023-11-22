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

    int current = array[0];
    int count = 1;
    int maxCount = count;
    int maxNumber = current;

    for (int index = 1; index < arrSize; index++)
    {
        if (array[index] == current)
            count++;
        else {
            current = array[index];
            count = 1;
        }

        if (maxCount <= count) {
            maxNumber = array[index];
            maxCount = count;
        }

    }

    for (int i = 1; i <= maxCount; i++)
        cout << maxNumber << ' ';

    cout << endl;
    
    return 0;
}
