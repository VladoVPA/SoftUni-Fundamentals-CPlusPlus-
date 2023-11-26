#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    cin >> line;

    string digits;
    string letters;
    string others;

    int i = 0;
    while (line[i])
    {
        char c = line[i];
        if (isdigit(c))
            digits += c;
        else if (isalpha(c))
            letters += c;
        else
            others += c;

        i++;
    }

    cout << digits << endl << letters << endl << others << endl;

}
