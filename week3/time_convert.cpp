/* Take user input in 24-hour24 format and output 12-hour24 format */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hour24, minute24, hour12, minute12;
    char colon;
    string am_pm;
    cout << "Enter the time in a 24-hour format: ";
    cin >> hour24 >> colon >> minute24;
    minute12 = minute24;

    if (hour24 >= 0 && hour24 <= 11)
    {
        am_pm = "AM";
        if (hour24 == 0)
        {
            hour12 = 12;
        }
        else
        {
            hour12 = hour24;
        }
    }
    else if (hour24 >= 12 && hour24 <= 23)
    {
        am_pm = "PM";
        if (hour24 == 12)
        {
            hour12 = 12;
        }
        else
        {
            hour12 = hour24 - 12;
        }
    }
    else
    {
        cout << "Invalid time." << endl;
    }

    cout << "The time in 24-hour format is: " << hour24 << colon << minute24 << " " << endl
         << "The time in 12-hour format is: " << hour12 << colon << minute12 << " " << am_pm << endl;
    return 0;
}