#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <climits>

using namespace std;

void putDataToVector(istream & stream, vector<int> & vv) {
    string line;
    getline(stream, line);

    istringstream input(line);

    int num;
    while (input >> num)
        vv.push_back(num);
}

void printVectorFromEnd(vector<int>& vv) {
    vector<int>::iterator ind = vv.end() - 1;
    while (ind >= vv.begin()) {
        cout << *ind << ' ';
        if (ind != vv.begin())
            ind--;
        else
            break;
    }
}

vector<int>::iterator returnMINposition(vector<int> & vv) {
    int min = INT_MAX;
    vector<int>::iterator currentmin;
    vector<int>::iterator it = vv.begin();
    for (; it != vv.end(); it++)			
        if (*it < min) {
            currentmin = it;
            min = *it;
        }
   
    return currentmin;
}

int main()
{
    vector<int> trainA, trainB, trainCtype2;
    putDataToVector(cin, trainA);
    putDataToVector(cin, trainB);
    ostringstream trainCtype1;

    trainCtype2.reserve(trainA.size() + trainB.size());

    sort(trainA.begin(), trainA.end());
    sort(trainB.begin(), trainB.end());
    
    vector<int>::iterator itA = trainA.begin();
    vector<int>::iterator itB = trainB.begin();
    
    while (itA!=trainA.end() && itB != trainB.end()) {
        if (*itA < *itB) {
            trainCtype1 << "A";
            trainCtype2.push_back(*itA);
            itA++;
        }
        else if (*itA == *itB) {
            trainCtype1 << "A" << "B";
            trainCtype2.push_back(*itA);
            trainCtype2.push_back(*itB);
            itA++;
            itB++;
        }
        else if (*itA > *itB) {
            trainCtype1 << "B";
            trainCtype2.push_back(*itB);
            itB++;
        }
    }
        for (; itA != trainA.end(); itA++) {
            trainCtype1 << "A";
            trainCtype2.push_back(*itA);
        }

        for (; itB != trainB.end(); itB++) {
            trainCtype1 << "B";
            trainCtype2.push_back(*itB);
        }

        cout << trainCtype1.str() << endl;

        printVectorFromEnd(trainCtype2);

        cout << endl;
        return 0;
    
}
