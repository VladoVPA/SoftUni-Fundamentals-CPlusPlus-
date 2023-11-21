#include <iostream>
using namespace std;

const int MAX_SIZE = 99;

void printArray(int arr[], int N, string space = " ") {
    for (int i = 0; i < N; i++)
        cout << arr[i] << space;

    cout << endl;
}
int main()
{
    int num;
    cin >> num;

    int FArray[MAX_SIZE] = {};
    int SArray[MAX_SIZE] = {};

    int* toFirst = FArray;
    int* toSecond = SArray;

    for (int ind = 0; ind < num; ind++)
    {
        int a, b;
        cin >> a >> b;

        toFirst[ind] = a;
        toSecond[ind] = b;

        int* temp = toFirst;
        toFirst = toSecond;
        toSecond = temp;

    }

    printArray(FArray, num);
    printArray(SArray, num);
}
