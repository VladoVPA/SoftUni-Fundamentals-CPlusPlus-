#include <iostream>
using namespace std;

const int MAX_SIZE = 99;

int main()
{
    int N;
    cin >> N;

    int numbers[MAX_SIZE];
    
    for (int cnt = 0; cnt < N; cnt++)
        cin >> numbers[cnt];

    for (int ind = N - 1; ind >= 0; ind--)
        cout << numbers[ind] << ' ';

    cout << endl;
    return 0;
}