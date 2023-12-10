#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void printVector(const vector<string>&vv) {
        for (string n : vv)
            cout << n;
    }

int main()
{
    string input;
    getline(cin, input);

    vector <string> train;

    while (input != "end") {
        if(input == "empty")
            train.push_back("| ");
        else
            train.push_back("|" + input);
        
        getline(cin, input);
    }
    
    string tempTxt;

    char command;
    cin >> command;
    while (command != 'E') {
    //vector<string> ::iterator it = train.begin();   
            
    switch (command)
        {
        case 'P':                   //P – print the current train structure:
            printVector(train);
            cout << '|' << endl;

            //cin >> command;
            break;
        
        case 'M':// M oldWagonPosition newWagonPosition.Move the wagon at position oldWagonPosition to the newWagonPosition
            int oldWagonPosition, newWagonPosition;
            cin >> oldWagonPosition >> newWagonPosition;
                                   
            if (oldWagonPosition > newWagonPosition) {
                tempTxt = train[oldWagonPosition-1];
                train.insert(train.begin() + newWagonPosition - 1, tempTxt);
                train.erase(train.begin() + oldWagonPosition);
            }
            else {
                tempTxt = train[oldWagonPosition - 1];
                train.erase(train.begin() + oldWagonPosition - 1);
                train.insert(train.begin()+ newWagonPosition - 1, tempTxt);
            }

            printVector(train);
            cout << '|' << endl;

            //cin >> command;
            break;
       
        case 'L':                   //L wagonPosition: leave the wagon at position wagonPosition
            int wagonPosition;
            cin >> wagonPosition;
            
            train.erase(train.begin()+wagonPosition-1);

            printVector(train);
            cout << '|' << endl;

            //cin >> command;
            break;
        
        default:
            break;
        }
        cin >> command;
    }

    

    //cout << endl;
    return 0;
}
