#include <iostream>
using namespace std;

double calculateTotalPrice(string item, int quantity);

int main()
{
    string product;
    cin >> product;

    int quantity;
    cin >> quantity;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << calculateTotalPrice(product, quantity) << endl;
}

double calculateTotalPrice(string item, int quantity) {
    double price=0, total=0;
    if (item == "coffee")
        price = 1.5;
    else if (item == "water")
        price = 1;
    else if (item == "coke")
        price = 1.4;
    else if (item == "snacks")
        price = 2;

    total = price * quantity;
    return total;
}
