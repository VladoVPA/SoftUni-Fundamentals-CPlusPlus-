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

    int numRotation;
    cin >> numRotation;

    if (numRotation <= arrSize) {
        for (int after = numRotation; after < arrSize; after++)
            cout << array[after] << ' ';
        for (int befor = 0; befor < numRotation; befor++)
            cout << array[befor] << ' ';
    }
    else {
        int indexNew = numRotation - arrSize;
        for (int after1 = indexNew; after1 < arrSize; after1++)
            cout << array[after1] << ' ';
        for (int befor1 = 0; befor1 < indexNew; befor1++)
            cout << array[befor1] << ' ';
    }

    cout << endl;

}
