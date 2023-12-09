#include <iostream>
#include <string>
#include <sstream>
using namespace std;

const int MAX_SIZE = 50;

int giveAverage(int str[], int num) {
    int sum = 0;
    for (int n = 0; n < num; n++)
        sum += str[n];
        
    return sum /num;
}

int main()
{
    int N;
    cin >> N;

    if (N <= 0) {
        cout << "No" << endl;
        return 1;
    }

    int line[MAX_SIZE] = {};
    int lineResults[MAX_SIZE] = {};
   
    for (size_t c = 0; c < N; c++)
        cin >> line[c];

    int average = giveAverage(line, N);

    int count = 0;

    for (int i = 0; i < N; i++) {
        if (line[i] < average)
            if (line[i] % 2 == 0) {
                lineResults[count] = line[i];
                count++;
            }
    }

    if (count == 0) {
        cout << "No" << endl;
        return 1;
    }

    for (int i = 0; i < count-1; i++) {
        if (lineResults[i] < lineResults[i + 1]) {
            int temp = lineResults[i];
            lineResults[i] = lineResults[i + 1];
            lineResults[i + 1] = temp;
            i = 0;
        }
    }

    for (int c=0; c < count; c++)
        cout << lineResults[c] << ' ';

    cout << endl;
    return 0;
}
