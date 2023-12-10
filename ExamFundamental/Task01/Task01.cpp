#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

bool isVowel(char c) {
    //1.	Vowels are the letters a, e, i, o, u and y
    char x = tolower(c);
    return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y';
}

int main()
{
    int N, countVowels =0, countNonVowels=0;
    cin >> N;
    cin.ignore();

    string input;
    getline(cin, input);

    for (char c : input) {
        if (isVowel(c))
            countVowels++;
        else {
            if (isalpha(c))
                countNonVowels++;
        }
    }

    cout << countVowels << ' ' << countNonVowels;

    cout << endl;
    return 0;
}
