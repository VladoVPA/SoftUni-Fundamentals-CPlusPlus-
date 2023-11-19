#include <iostream>
#include <cctype>

using namespace std;

bool validatePassword (string string, bool & lenghtValidate, bool & digitsValitate, bool & contentValidate) {
    int i = 0;
    int digitscount = 0;

    while (string[i]) {
        if (isdigit(string[i])) digitscount++;

        if (!isalnum(string[i]))  contentValidate = false;

        i++;
    }

    lenghtValidate = (string.size() >= 6 && string.size() <= 10);
    contentValidate = (digitscount >= 2);

    return lenghtValidate && digitsValitate && contentValidate;
}

int main()
{
    string password;
    cin >> password;

    bool digitsV, lenghtV, contentV;

    if (validatePassword(password, lenghtV, digitsV, contentV))
        cout << "Password is valid" << endl;

    if (!lenghtV)
        cout << "Password must be between 6 and 10 characters" << endl;
    if (!digitsV)
        cout << "Password must consist only of letters and digits" << endl;
    if (!contentV)
        cout << "Password must have at least 2 digits" << endl;

    return 0;
}
