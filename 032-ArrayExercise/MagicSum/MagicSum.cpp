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

    int magicSum;
    cin >> magicSum;


    for (int i = 0; i < arrSize; i++) {
        for (int j = i+1; j < arrSize; j++)
            if (array[i] + array[j] == magicSum)
                cout << array[i] << ' ' << array[j] << endl;
    }

    return 0;

}
