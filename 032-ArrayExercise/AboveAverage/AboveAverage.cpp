#include <iostream>
using namespace std;

const int MAX_SIZE = 99;

void printArray(int arr[], int N, string space = " ") {
    for (int i = 0; i < N; i++)
        cout << arr[i] << space;

    cout << endl;
}

void readArreay(int arr[], int & size) {
    cin >> size;

    for (size_t ind = 0; ind < size; ind++)
        cin >> arr[ind];
}

int arraySum(int arr[]) {
    int sum = 0;
    int i = 0;
    
    while (arr[i]) {
        sum += arr[i];
        i++;
    }

    return sum;
}


int main()
{
    int array[MAX_SIZE] = {};
    int arrSize;

    readArreay(array, arrSize);
    int averageNum = arraySum(array) / arrSize;

    for (int i = 0; i < arrSize; i++)
        if (array[i] >= averageNum)
            cout << array[i] << ' ';

    cout << endl;
}
