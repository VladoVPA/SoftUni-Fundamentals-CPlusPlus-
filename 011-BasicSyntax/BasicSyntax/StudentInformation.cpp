#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    int age;
    float grade;

    cin >> name >> age >> grade;

    cout << "Name: " << name << ", Age: " << age <<
        ", Grade: " << fixed << setprecision(2) << grade << endl;
}
