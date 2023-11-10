#include <iostream>
using namespace std;

string gradeIs(float number);

int main()
{
    float grade;
    cin >> grade;

    cout << gradeIs(grade) << endl;

    return 0;
}

string gradeIs(float number) {
    if (number >= 2 && number <= 2.99) {
        return "Fail";
    }
    else if (number >= 3 && number <= 3.49) {
        return "Poor";
    }
    else if (number >= 3.5 && number <= 4.49) {
        return "Good";
    }
    else if (number >= 4.5 && number <= 5.49) {
        return "Very good";
    }
    else if (number >= 5.5 && number <= 6.00) {
        return "Excellent";
    }

}
