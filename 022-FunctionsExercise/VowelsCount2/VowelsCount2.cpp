#include <iostream>
#include <string>
using namespace std;

int countVowels(string string);

int main()
{
    string text;
    cin >> text;


    cout << countVowels(text) << endl;

    return 0;
    
}

int countVowels(string string) {
    int count = 0;
    for (int l = 0; l < string.size(); l++) {
        switch (tolower(string[l])) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            count++;
        }
    }
    return count;
}

