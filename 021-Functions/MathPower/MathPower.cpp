#include <iostream>
using namespace std;

long long exponentiation(int x, int n);

int main()
{
    int base, power;
    cin >> base >> power;

    cout << exponentiation(base, power) << endl;

    return 0;
}

long long exponentiation(int x, int n) {
    long long total = 1;
    for (int i = 1; i <= n; i++)
        total = total * x;

    return total;
}