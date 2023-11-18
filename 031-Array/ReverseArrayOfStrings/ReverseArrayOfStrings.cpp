#include <iostream>
using namespace std;
const int MAX_SIZE = 99;

int main()
{
    string array[MAX_SIZE];
    int actualSize;
    cin >> actualSize;

    for (int index = 0; index < actualSize; index++)
        cin >> array[index];

    int halfArray = actualSize / 2;

    for (int index = 0; index < halfArray; index++) {
        string text = array[index];
        array[index] = array[actualSize - 1 - index];
        array[actualSize - 1 - index] = text;
    }

    for (int index = 0; index < actualSize; index++)
        cout << array[index] << ' ';

    cout << endl;
    return 0;
}