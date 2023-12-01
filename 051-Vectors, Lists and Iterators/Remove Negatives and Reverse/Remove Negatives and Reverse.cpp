#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void putDataToVector(istringstream &stream, vector<int> & vv) {
    int num;
    while(stream >> num)
        vv.push_back(num);
}

int main()
{
    string input;
    getline(cin, input);

    istringstream inputLine(input);

    vector<int> numbers;

    putDataToVector(inputLine, numbers);

    vector<int>::iterator it = numbers.begin();
    for (; it != numbers.end();)
        if (*it < 0)
            it = numbers.erase(it);
        else
            it++;
    if (numbers.size()==0) {
        cout << "empty"; 
        return 0;
    }
    else {
        vector<int>::iterator pt = numbers.end() - 1;
        while (pt >= numbers.begin()) {
            cout << *pt << ' ';
            if (pt != numbers.begin())
                pt--;
            else
                break;
        }
    }

    cout << endl;
    return 0;
}
