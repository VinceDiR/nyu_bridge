/* This is a program designed for users to input a number of quarters, dimes, nickels, and pennies. It will output the total in dollars and remaining cents format. */
#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels, pennies, total_cents, dollars, cents;

    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters: ";
    cin >> quarters;
    cout << "# of dimes: ";
    cin >> dimes;
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;

    total_cents = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
    dollars = total_cents / 100;
    cents = total_cents % 100;

    cout << "The total is " << dollars << " dollars and " << cents << " cents" << endl;

    return 0;
}