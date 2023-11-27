#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputStr;
    getline(cin, inputStr);

    int i = 0;
    while (inputStr[i])
    {
        cout << (char)(inputStr[i] + 3);
        i++;
    }
    cout << endl;
    return 0;
}
