#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputStr;
    getline(cin, inputStr);

    for(char c:inputStr)  // Range-Based For Loopn
    {
        cout << (char)(c + 3);
    }
    cout << endl;
    return 0;
}
