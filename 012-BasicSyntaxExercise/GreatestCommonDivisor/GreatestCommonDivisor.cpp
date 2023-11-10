#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 == n2) {
        cout << n1 << endl;
        return 0;
    }

    int first = 0, second = 0;
    int result;

    if (n1 > n2) {
        first = n1;
        second = n2;
    }
    else {
        first = n2;
        second = n1;
    }

    while (true) {
        result = first % second;
        if (result == 0) {
            cout << second << endl;
            break;
        }
        else {
            first = second;
            second = result;
        }

    }
}
