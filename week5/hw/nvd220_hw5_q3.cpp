#include <iostream>
#include <string>
using namespace std;

int print_month_calendar(int num_days, int starting_day);
bool is_leap_year(int year);
void print_year_calendar(int year, int starting_day);

int main()
{
    int year, starting_day;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the starting day of the year (1 for Monday, 2 for Tuesday, ... 7 for Sunday): ";
    cin >> starting_day;

    print_year_calendar(year, starting_day);
    return 0;
}

int print_month_calendar(int num_days, int starting_day)
{
    string days[] = {"Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun"};
    for (string day : days)
    {
        cout << day << "\t";
    }
    cout << endl;

    int current_day = 1;
    for (int i = 1; i < starting_day; i++)
    {
        cout << "\t";
    }

    for (; current_day <= num_days; starting_day++)
    {
        cout << current_day++ << "\t";
        if (starting_day % 7 == 0)
        {
            cout << endl;
        }
    }

    cout << endl
         << endl;
    return (starting_day - 1) % 7;
}

bool is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }
    return false;
}

void print_year_calendar(int year, int starting_day)
{
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (is_leap_year(year))
    {
        daysInMonth[1] = 29;
    }

    for (int i = 0; i < 12; i++)
    {
        cout << months[i] << " " << year << endl;
        starting_day = print_month_calendar(daysInMonth[i], starting_day) + 1;
    }
}
