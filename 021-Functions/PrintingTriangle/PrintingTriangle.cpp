#include <iostream>
using namespace std;

// function printin line of number; ex: 1 2 3 , when x is 3;
void printLine(int x);

int main()
{

    int num;
    cin >> num;

    for (int row = 1; row <= num; row++) {
        printLine(row);
    }

    for (int row = num-1; row >= 1; row--) {
        printLine(row);
    }

}

void printLine(int x) {
    for (int i = 1; i <= x; i++) {
            cout << i << ' ';       
    }
    cout << endl;
}