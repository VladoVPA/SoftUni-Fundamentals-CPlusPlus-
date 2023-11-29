#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool wordIsValid(string name) {
    int size=name.size();
    if (size < 3 || size > 16)
        return false;
   
    for (int c = 0; c < size; c++) {
        char x = name[c];
        if (isalnum(x) == false) {
            if (x == '-' || x == '_')
                continue;
            else
                return false;
        }
    }
    return true;
}

int main()
{
    string inputLine;
    getline(cin, inputLine);

    const string divider = ", ";
    int sizeDiv = divider.size();

    
    while (inputLine.size()) {
        string username;
        int index = inputLine.find(divider);
        if (inputLine.find(divider) != string::npos) {
            username = inputLine.substr(0, index);
            inputLine.erase(0, index + sizeDiv);
        }
        else {
            username = inputLine;
            inputLine.clear();
        }

        if (wordIsValid(username))
            cout << username << endl;

    }
    cout << endl;
    return 0;
}
