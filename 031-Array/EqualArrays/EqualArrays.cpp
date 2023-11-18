#include <iostream>
using namespace std;
const int MAX_SIZE = 99;

void writeInArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

int main()
{
    int N;
    cin >> N;

    int numbers1[MAX_SIZE];
    int numbers2[MAX_SIZE];
    int sum = 0;

    writeInArray(numbers1, N);
    writeInArray(numbers2, N);

    for (int index = 0; index < N; index++) {
        if (numbers1[index] != numbers2[index]) {
            cout << "Arrays are not identical. Found difference at " << index << " index." << endl;
            return 0;
        }

        sum += numbers1[index];
    }

    cout << "Arrays are identical. Sum: " << sum << endl;

    return 0;
}