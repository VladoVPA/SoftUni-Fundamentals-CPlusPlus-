#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    float D = b * b - 4 * a * c;

    if (D < 0) {
        cout << "no roots" << endl;
        return 0;
    }

    if (D == 0) {
        float x = -b / (2 * a);
        cout << x << endl;
        return 0;
    }

    float x1 = (-b + sqrt(D)) / (2 * a);
    float x2 = (-b - sqrt(D)) / (2 * a);

    cout << x1 << ' ' << x2 << endl;

    return 0;
}
