#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> numbers;
    numbers.reserve(N);

    int average = 0, evenSum = 0, oddSum = 0;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
        average += numbers[i];
    }

    average = average / N;

    vector<int> ::iterator it = numbers.begin();
    for (; it != numbers.end(); ) {
        if (*it > average)
            it = numbers.erase(it);
        else
            it++;
    }

    for (int i = 0; i < numbers.size(); i++) {
        if (i % 2 == 0)
            evenSum += numbers[i];
        else
            oddSum += numbers[i];
    }
       
    cout << evenSum * oddSum << endl;
    return 0;
}
