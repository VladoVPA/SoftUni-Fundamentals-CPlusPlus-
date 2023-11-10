#include <iostream>
using namespace std;

int findMin(int a, int b);
int findMin(int a, int b, int c);

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
   
    cout << findMin(x1, x2, x3) << endl;

    return 0;
}

int findMin(int a, int b) {
    if (a < b)
        return a;

    return b;
}
int findMin(int a, int b, int c) {
    return findMin(a, findMin(b, c));
}

/*#include <iostream>
using namespace std;

int findMin(int a, int b, int c);

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    cout << findMin(x1, x2, x3) << endl;

    return 0;
}

int findMin(int a, int b, int c) {
    int currentMin = a;
    if (b < currentMin)
        currentMin = b;
    if (c < currentMin)
        currentMin = c;

    return currentMin;
}*/