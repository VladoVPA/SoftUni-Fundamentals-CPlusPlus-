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
    int arrFrom0To9[10] = {};
    int arrSize;

    readArreay(array, arrSize);

    int i = 0;
    while (arrSize > i) {
        int N = array[i];
        int count = arrFrom0To9[N];
        count++;
        arrFrom0To9[N] = count;
        i++;
    }

    int maxN = 0;
    for (int i = 0; i < 10; i++)
        if (arrFrom0To9[i] > maxN)
            maxN = arrFrom0To9[i];

    for (int i = 0; i < 10; i++)
        if (arrFrom0To9[i] == maxN)
            cout << i << ' ';

    cout << endl;
}