
/* Simple roulette program - takes user input as integer and outputs the color of the pocket. */
#include <iostream>
using namespace std;

int main()
{
    int user_input;
    cout << "Enter a pocket number: ";
    cin >> user_input;

    if (user_input == 0)
    {
        cout << "Pocket " << user_input << " is green." << endl;
    }
    else if ((user_input >= 1 && user_input <= 36))
    {
        if (user_input % 2 == 0)
            cout << "Pocket " << user_input << " is black." << endl;
        else
            cout << "Pocket " << user_input << " is red." << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }
    return 0;
}