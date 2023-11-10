#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int sum = 0, count=1;
    int i = 1;

    while (count <= num) {
        cout << i << endl;
        sum += i;
        i += 2;
        count++;
    }
    cout << "Sum: " << sum << endl;

}
