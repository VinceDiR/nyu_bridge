/* This is a program designed for users to input a dollar and cents amount as input and output the number of quarters, dimes, nickels, and pennies needed to make that amount. */
#include <iostream>
using namespace std;

int main() {
    int dollars, cents, quarters, dimes, nickels, pennies, total_cents;

    cout<<"Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin>>dollars>>cents;

    total_cents = dollars*100 + cents;

    quarters = total_cents/25;
    total_cents = total_cents%25;

    dimes = total_cents/10;
    total_cents = total_cents%10;

    nickels = total_cents/5;
    total_cents = total_cents%5;

    pennies = total_cents;

    cout<<dollars<<" dollars and "<<cents<<" cents are:"<<endl;
    cout<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies"<<endl;

    return 0;
}