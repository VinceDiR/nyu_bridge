#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name, middle_name, last_name;

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your middle name or initial: ";
    cin >> middle_name;

    cout << "Please enter your last name: ";
    cin >> last_name;

    // Check if the middle name is a single character (an initial)
    if (middle_name.length() == 1)
    {
        middle_name += ".";
    }
    else
    {
        // If it's not a single character, take the first character and add a period
        middle_name = middle_name.substr(0, 1) + ".";
    }

    cout << "Formatted Name: " << last_name << ", " << first_name << " " << middle_name << '\n';

    return 0;
}
