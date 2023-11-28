#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main()
{
    string inputLine, word;
    getline(cin, inputLine);
    istringstream sentence(inputLine);
    ostringstream resultSentence;
    
    inputLine[0] = toupper(inputLine[0]);

    for (int i = 0; i < inputLine.size(); i++) {
        if(ispunct(inputLine[i]) || inputLine[i] == ' ')
            inputLine[i+1] = toupper(inputLine[i + 1]);
        
        resultSentence << inputLine[i];
    }

    

    cout << resultSentence.str() << endl;
    //cout << (char)toupper('-') << (char)toupper('5') << (char)toupper('?');
    return 0;
}
