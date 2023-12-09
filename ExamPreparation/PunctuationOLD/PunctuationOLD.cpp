#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string essay;
    getline(cin, essay);

    int count = 0;
    vector <int> countPunct;
    countPunct.reserve(10);

    for (char c : essay) {
        if (ispunct(c)) {
            if (c == '|') {
                if (count > countPunct.size()) {
                    int size = countPunct.size();
                    for (size_t i = 0; i < count - size + 1; i++)
                        countPunct.push_back(0);
                }

                countPunct[count] += 1;
                count = 0;
            }
            else {
                count++;
            }

        }
    }

    for (size_t index = 1; index < countPunct.size(); ) {
        if (countPunct[index] == 0)
            index++;
        else {
            cout << index << " symbol sentences: " << countPunct[index] << endl;
            index++;
        }

    }

    cout << endl;
    return 0;
}
