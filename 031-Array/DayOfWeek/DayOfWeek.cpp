#include <iostream>
using namespace std;

const string daysOfWeek[] = {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday" 
};

int main()
{
    int day;
    cin >> day;

    if (day < 1 || day >7)
        cout << "Invalid day!";
    else
        cout << daysOfWeek[day-1];

    cout << endl;
    return 0;
}


/*#include <iostream>
using namespace std;


int main()
{


    return 0;
}*/
