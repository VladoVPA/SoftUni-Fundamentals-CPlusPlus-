#include <iostream>
using namespace std;

/*int giveMeSign(int number);

int main()
{
    int number;
    cin >> number;

    if (giveMeSign(number) == 0) {
        cout << "The number " << number << " is zero." << endl;
    }
    if (giveMeSign(number) == 1) {
        cout << "The number " << number << " is positive." << endl;
    }
    if (giveMeSign(number) == -1) {
        cout << "The number " << number << " is negative." << endl;
    }

    return 0;
}

int giveMeSign(int number) {
    if (number > 0) {
        return 1;
    }
    else if (number < 0) {
        return -1;
    }
    else {
        return 0;
    }
}*/

int main()
{
    void isPositive(int number);
    int number;
    cin >> number;

    cout << "The number " << number;
    isPositive(number);

    return 0;

}
void isPositive(int number) {
    if (number > 0) {
        cout << " is positive." << endl;
    }
    else if (number < 0) {
        cout << " is negative." << endl;
    }
    else {
        cout << " is zero." << endl;
    }

}