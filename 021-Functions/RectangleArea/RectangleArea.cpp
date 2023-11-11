#include <iostream>
using namespace std;

double rectanglArea(double a, double b);

int main()
{
    double w, h;
    cin >> w >> h;

    cout << rectanglArea(w, h);

    return 0;
}

double rectanglArea(double a, double b) {
    return a * b;
}