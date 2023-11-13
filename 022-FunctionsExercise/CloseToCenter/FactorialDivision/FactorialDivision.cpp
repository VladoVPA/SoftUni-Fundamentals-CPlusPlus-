#include <iostream>
using namespace std;

long long factorial(int x) {
    long long result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    double result = 1.0 * factorial(num1) / factorial(num2);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << result << endl;

}
