#include <iostream>
#include <string>
using namespace std;

void compareInts() {
    int a1, a2;
    cin >> a1 >> a2;

    if (a1 >= a2)
        cout << a1;
    else
        cout << a2;
}

void compareChars() {
    char a1, a2;
    cin >> a1 >> a2;

    if (a1 >= a2)
        cout << a1;
    else
        cout << a2;
}

void compareStrings() {
    string a1, a2;

    cin.ignore();
    getline (cin, a1);
    getline (cin, a2);

    if (a1 >= a2)
        cout << a1;
    else
        cout << a2;
}

int main()
{
    string type;
    cin >> type;

    if (type == "int")
        compareInts();
    else if (type == "char")
        compareChars();
    else if (type == "string")
        compareStrings();

}
