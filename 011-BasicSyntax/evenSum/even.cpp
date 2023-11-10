#include <iostream>
using namespace std;

int main()
{
    int num;
    while (cin >> num) {
        if (num % 2 == 0) {
            cout << "The number is: " << abs(num) << endl;
            break;
        }
        else {
            cout << "Please write an even number." << endl;
        }
    }


}
