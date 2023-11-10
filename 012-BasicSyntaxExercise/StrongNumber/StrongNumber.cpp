#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int factorial = 0;

    if (number == 0) {
        cout << "no" << endl;
        return 0;
    }

    int lastNum = number % 10;
    int current = number / 10;

    while (true) {
        int currentFactorial = 1;
        if (lastNum == 0 || lastNum == 1) {
            factorial += 1;
        }
        else {
            for (int i = 1; i <= lastNum; i++) {
                currentFactorial *= i;
            }
            factorial += currentFactorial;
        }
        
        lastNum = current % 10;
        current = current / 10;

        if (lastNum == 0 && current == 0) break;

    }

    if (number == factorial)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
