
/* This program takes day, hour, and minute inputs from the user for the */
#include <iostream>
using namespace std;

int main()
{
    int days_john, hours_john, minutes_john;
    int days_bill, hours_bill, minutes_bill;

    cout << "Please enter the number of days John has worked: ";
    cin >> days_john;

    cout << "Please enter the number of hours John has worked: ";
    cin >> hours_john;

    cout << "Please enter the number of minutes John has worked: ";
    cin >> minutes_john;

    cout << "Please enter the number of days Bill has worked: ";
    cin >> days_bill;

    cout << "Please enter the number of hours Bill has worked: ";
    cin >> hours_bill;

    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> minutes_bill;

    int total_minutes = minutes_john + minutes_bill;
    int extra_hours = total_minutes / 60;
    total_minutes %= 60;

    int total_hours = hours_john + hours_bill + extra_hours;
    int extra_days = total_hours / 24;
    total_hours %= 24;

    int total_days = days_john + days_bill + extra_days;

    cout << "The total time both of them worked together is: "
              << total_days << " days, " << total_hours << " hours and "
              << total_minutes << " minutes.\n";

    return 0;
}
