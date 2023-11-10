#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int currentMin = INT_MAX;
    int currentMax = INT_MIN;
    int current;

    for (int i = 1; i <= N; i++) {
        cin >> current;

        if (current < currentMin)
            currentMin = current;
        
        if (current > currentMax)
            currentMax = current;
    }

    /*if (N == 1)
        cout << current << ' ' << current << endl;
    else */
        cout << currentMin << ' ' << currentMax << endl;

}
