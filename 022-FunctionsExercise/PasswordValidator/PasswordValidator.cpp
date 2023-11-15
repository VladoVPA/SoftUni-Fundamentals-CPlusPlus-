#include <iostream>
using namespace std;

bool verifyLength(string text); // проверява дължината на текст, дали е над 6 
bool verifyTwoDigts(string text);
bool verifySymbuls(string text);


int main()
{
    string password;
    cin >> password;


    if (!verifyLength(password))
        cout << "Password must be between 6 and 10 characters" << endl;
    if (!verifySymbuls(password))
        cout << "Password must consist only of letters and digits" << endl;
    if (!verifyTwoDigts(password))
        cout << "Password must have at least 2 digits" << endl;
    

    if (verifyLength(password) && verifyTwoDigts(password) && verifySymbuls(password))
        cout << "Password is valid" << endl;
    
}

bool verifyLength(string text) {
   int l = text.size();
   if (l >= 6 && l <= 10)
       return true;
   else
       return false;
}

bool verifyTwoDigts(string text) {
    int l = text.size();
    int countnumbers = 0;
    
    for (int i = 0; i < l; i++) {
        char currentLetter = text[i];
        if (currentLetter >= 48 && currentLetter <= 57)
            countnumbers++;
    }
    
    if (countnumbers >= 2)
        return true;
    else
        return false;
}

bool verifySymbuls(string text) {
    int l = text.size();
    for (int i = 0; i < l; i++) {
        char currentLetter = text[i];
        if (!(currentLetter >= 48 && currentLetter <= 57 || currentLetter >= 65 && currentLetter <= 90 || currentLetter >= 97 && currentLetter <= 122))
            return false;
    }
    return true;
}