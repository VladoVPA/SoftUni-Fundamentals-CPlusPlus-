#include <iostream>
#include <string>

using namespace std;

bool isMagicSymbol(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    string input;
    getline(cin, input);

    char previousChar = 0;

    for (char t = 0; t < input.size(); ) {
        if (isMagicSymbol(input[t])) {
            previousChar = input[t];
            t++;
        }
        else if (input[t] != previousChar) {
            previousChar = input[t];
            t++;
        }
        else
            input.erase(t,1);
    }

    cout << input << endl;
    return 0;
}
