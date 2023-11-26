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
    string word;

   // while (getline(istr, word, ' ')) {
    while (istr >> word) {
        int repeat = word.size();

        while (repeat--) 
            resultString << word;
     }

    cout << resultString.str() << endl;
}
