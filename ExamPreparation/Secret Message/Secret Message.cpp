#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int sum = 0;

    for (char c : input) {
        if (isdigit(c)) {
            sum += (c - '0');
        }
    }

    if (sum >= 65 && sum <= 90) {
        //it is upper letter
        cout << (char)sum;
    }
    else if (sum >= 97 && sum <= 122) {
        //it is lower letter
        cout << (char)sum;
    }
    else
        cout << sum;

    cout << endl;
    return 0;
}
