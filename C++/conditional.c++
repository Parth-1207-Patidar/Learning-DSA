#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "Essay?!" << endl;
    }

    else if (age == 18)
    {
        cout << "License Banwa" << endl;
    }

    else
    {
        cout << "Mast thok bc" << endl;
    }
}

// Switch Case

int main()
{
    int day;
    cout << "Enter the day (1-7): ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "No Sleep?!" << endl;
        break;

    case 7:
        cout << "No Majdoori" << endl;
        break;


    default:
        cout << "Andha Hai Kya?" << endl;
        break;
    }

    // break-continue........ aata hai
}