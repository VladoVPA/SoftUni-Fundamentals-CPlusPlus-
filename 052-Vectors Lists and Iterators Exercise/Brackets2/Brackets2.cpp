#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

void putCharsInVector(istream& stream, vector<char> &vv) {
    string line;
    getline(stream, line);

    for (char c : line)
        vv.push_back(c);
}

void delate(vector<char>& vv, char a, char b) {
    vector<char> ::iterator it = vv.begin();
    for (; it != vv.end(); ) {
        if (*it == a && *(it + 1) == b) {
            vv.erase(it, it + 2);
            it = vv.begin();
        }
        else
            it++;
    }
}


int main()
{
    vector<char> expression;
    putCharsInVector(cin, expression);

    vector<char> ::iterator itFind1;
    vector<char> ::iterator itFind2;
    
    delate(expression, '(', ')');
    
    itFind1 = find(expression.begin(), expression.end(), '(');
    itFind2 = find(expression.begin(), expression.end(), ')');

    if (itFind1 != expression.end() || itFind2 != expression.end()) {
        cout << "invalid" << endl;
        return 0;
    }
    else if (expression.empty()) {
        cout << "valid" << endl;
        return 0;
    }
        
    delate(expression, '[', ']');

    itFind1 = find(expression.begin(), expression.end(), '[');
    itFind2 = find(expression.begin(), expression.end(), ']');

    if (itFind1 != expression.end() || itFind2 != expression.end()) {
        cout << "invalid" << endl;
        return 0;
    }
    else if (expression.empty()) {
        cout << "valid" << endl;
        return 0;
    }

    delate(expression, '{', '}');

    if (expression.empty())
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;

    return 0;
}
