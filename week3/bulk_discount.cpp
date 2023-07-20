/* An app that takes in number of units user wants to order and outputs 
the total amount, discount, and net cost of the order. 0-10: 0%, 10-19: 10%, 20-49: 20%, 50-99: 30%, 100+: 40%*/

#include <iostream>
using namespace std;

int main() {
    const double UNIT_PRICE = 99.0;
    int user_input;
    double total_amount, discount, net_cost;

    cout << "Enter number of units you wish to order: ";
    cin >> user_input;

    total_amount = user_input * UNIT_PRICE;
    if (user_input < 10)
        discount = 0;
    else if (user_input >= 10 && user_input <= 19)
        discount = total_amount * 0.1;
    else if (user_input >= 20 && user_input <= 49)
        discount = total_amount * 0.2;
    else if (user_input >= 50 && user_input <= 99)
        discount = total_amount * 0.3;
    else if (user_input >= 100)
        discount = total_amount * 0.4;
    
    net_cost = total_amount - discount;
    cout << "Gross cost: $" << total_amount << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Net cost: $" << net_cost << endl;
    return 0;
}