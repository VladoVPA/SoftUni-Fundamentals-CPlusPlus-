#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string line;
    getline(cin, line);

    istringstream istr(line);
    ostringstream resultString;

    while (istr) {
        string word;
        getline(istr, word, ' ');
        int repeat = word.size();

        while (repeat) {
            resultString << word;
            repeat--;
        }
    }

    cout << resultString.str() << endl;
}
