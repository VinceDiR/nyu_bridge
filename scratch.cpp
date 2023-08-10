#include <iostream>

using namespace std;

int main()
{
    int total_inches = 0;
    int inches, days = 0;

    // Constants
    const int INCHES_IN_A_FOOT = 12;
    const int FEET_IN_A_YARD = 3;
    const int INCHES_IN_A_YARD = INCHES_IN_A_FOOT * FEET_IN_A_YARD;

    while (true)
    {
        cout << "Enter the number of inches the snail traveled in day #"
             << days + 1
             << ", or type -1 if they reached their destination:";
        cin >> inches;

        if (inches == -1)
        {
            break;
        }

        total_inches += inches;
        days++;
    }

    int yards = total_inches / INCHES_IN_A_YARD;
    total_inches %= INCHES_IN_A_YARD;

    int feet = total_inches / INCHES_IN_A_FOOT;
    total_inches %= INCHES_IN_A_FOOT;

    cout << "In " << days << " days, the snail traveled " << yards
         << " yards, " << feet << " feet and " << total_inches << " inches."
         << endl;

    return 0;
}
