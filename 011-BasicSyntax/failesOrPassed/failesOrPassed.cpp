#include <iostream>
using namespace std;
int main()
{
    float grade;
    cin >> grade;

    if (grade >= 3) {
        cout << "Passed!" << endl;
    }
    else {
        cout << "Failed!" << endl;
    }
    /*if (grade >= 3 && grade <=6) {
        cout << "Passed!" << endl;
    }
    else if (grade >= 2 && grade <= 2.99) {
        cout << "Failed!" << endl;
    }*/
}
