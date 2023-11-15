#include <iostream>
#include <math.h>
using namespace std;

void giveNumberAsText(int n); // return the number as text - from one /1/ to nine /19/
int giveMeSize(int n); // return the size of a number
void giveMultiplesOf10AsText(int n);

int main()
{
    int num;
    cin >> num;

    if (num == 0) {
        cout << "zero" << endl;
        return 0;
    }

    int position1 = 0, position2 = 0, position3=0, position4 =0; // 1234

    int sizeOfNumber = giveMeSize(num);
    if (sizeOfNumber == 4) {
        position4 = num % 10;
        num = num / 10;
        position3 = num % 10;
        num = num / 10;
        position2 = num % 10; 
        num = num / 10;
        position1 = num % 10;

        giveNumberAsText(position1);
        cout << " thousand ";
        if (position2 != 0) {
            giveNumberAsText(position2);
            cout << " hundred ";
        }
        if (position3 == 0) {
            giveNumberAsText(position4);
            cout << endl;
        }
        if (position3 >= 2) {
            giveMultiplesOf10AsText(position3);
            cout << ' ';
            giveNumberAsText(position4);
            cout << endl;
        }
        if (position3 == 1) {
           giveNumberAsText(position3 * 10 + position4);
           cout << endl;
        }
    }
    else if (sizeOfNumber == 3) {
        position4 = num % 10; 
        num = num / 10;
        position3 = num % 10;
        num = num / 10;
        position2 = num % 10;
        
        giveNumberAsText(position2);
        cout << " hundred ";
        if (position3 == 0) {
            giveNumberAsText(position4);
            cout << endl;
        }
        if (position3 >= 2) {
            giveMultiplesOf10AsText(position3);
            cout << ' ';
            giveNumberAsText(position4);
            cout << endl;
        }
        if (position3 == 1) {
            giveNumberAsText(position3*10+position4);
            cout << endl;
        }
    }
    else if (sizeOfNumber == 2) {
        if (num < 20) {
            giveNumberAsText(num);
            cout << endl;
        }
        else {
            giveMultiplesOf10AsText(num / 10);
            cout << ' ';
            giveNumberAsText(num%10);
            cout << endl;
        }
    }
    else if (sizeOfNumber == 1) {
        giveNumberAsText(num);
        cout << endl;
    }
    return 0;
}


int giveMeSize(int n) {
    if (n > 999)
        return 4;
    else if (n > 99)
        return 3;
    else if (n > 9)
        return 2;
    else 
        return 1;
}

void giveMultiplesOf10AsText(int n) {
    switch (n) {
    case 2:
        cout << "twenty";
        break;
    case 3:
        cout << "thirty";
        break;
    case 4:
        cout << "forty";
        break;
    case 5:
        cout << "fifty";
        break;
    case 6:
        cout << "sixty";
        break;
    case 7:
        cout << "seventy";
        break;
    case 8:
        cout << "eighty";
        break;
    case 9:
        cout << "ninety";
        break;
    }
}

void giveNumberAsText(int n) {
    switch (n) {
    case 1:
        cout << "one"; 
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight";
        break;
    case 9:
        cout << "nine";
        break;
    case 10:
        cout << "ten";
        break;
    case 11:
        cout << "eleven";
        break;
    case 12:
        cout << "twelve";
        break;
    case 13:
        cout << "thirteen";
        break;
    case 14:
        cout << "fourteen";
        break;
    case 15:
        cout << "fifteen";
        break;
    case 16:
        cout << "sixteen";
        break;
    case 17:
        cout << "seventeen";
        break;
    case 18:
        cout << "eighteen";
        break;
    case 19:
        cout << "nineteen";
        break;
    }
}
