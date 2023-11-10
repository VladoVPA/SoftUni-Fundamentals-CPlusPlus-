#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int product = n1 * n2 * n3;

    if (product >= 0)
        cout << "+" << endl;
    else
        cout << "-" << endl;

    return 0;
}
