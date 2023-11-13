#include <iostream>
#include <math.h>

using namespace std;

// function that calculate the distance from a point to center of coordinate system 
// based on Pythagorean theorem
float hypotenuse(float x, float y);

int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    float c1 = hypotenuse(x1, y1);
    float c2 = hypotenuse(x2, y2);

    if (c1 <= c2) {
        cout << '(' << x1 << ", " << y1 << ')' << endl;
    }
    else {
        cout << '(' << x2 << ", " << y2 << ')' << endl;
    }
}

float hypotenuse(float x, float y) {
    return sqrt(x * x + y * y);
}