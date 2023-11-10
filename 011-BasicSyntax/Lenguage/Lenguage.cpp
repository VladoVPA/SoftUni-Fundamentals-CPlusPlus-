#include <iostream>

using namespace std;

int main()
{
    string country;

    cin >> country;

    if (country == "USA" || country == "England") {
        cout << "English" << endl;
    }
    else if (country == "Spain" || country == "Argentina" || country == "Mexico") {
        cout << "Spanish" << endl;
    }
    else {
        cout << "unknown" << endl;
    }

}
