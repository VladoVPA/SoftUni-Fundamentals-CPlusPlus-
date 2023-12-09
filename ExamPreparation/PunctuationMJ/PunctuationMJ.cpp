#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <vector>
#include <algorithm>

using namespace std;

//function to read integer vector/vector
void readIntV(vector<char>& v1) {
    string inp;
    getline(cin, inp);

    stringstream inputS(inp);
    char num;

    while (inputS >> num) {
        v1.push_back(num);
    }
}


int main()
{
    vector<char> inpV; //declaring a vector;
    readIntV(inpV);

    vector<char>::iterator it1;

    vector<int>result;

    int sumSym = 0;
    for (it1 = inpV.begin(); it1 != inpV.end(); it1++) {
        if (*it1 != '|') {
            if (!isalnum(*it1) && *it1 != 92) {
                sumSym++;
            }
        }
        else {
            if (sumSym != 0) {
                result.push_back(sumSym);
                sumSym = 0;
            }
        }
    }

    sort(result.begin(), result.end());

    vector<int>::iterator it3, it2;

    int count = 1;

    for (it2 = result.begin(); it2 != result.end(); it2++) {
        if (it2 != result.end() - 1) {
            for (it3 = it2 + 1; ; ) {
                if (*it2 == *it3) {
                    count++;
                    it3 = result.erase(it3);
                }
                else {
                    it3++;
                }
                if (it3 == result.end()) {
                    break;
                }
            }
        }
        cout << *it2 << " symbol sentences: " << count << endl;
        count = 1;

    }

    return 0;
}