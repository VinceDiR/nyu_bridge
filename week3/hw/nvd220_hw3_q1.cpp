/* Price calculator app. */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double first_item, second_item;
    char club_card;
    double tax_rate, discount_rate;
    double gross_price, price_after_discount, price_with_tax;

    cout << "Enter price of first item: ";
    cin >> first_item;
    cout << "Enter price of second item: ";
    cin >> second_item;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> club_card;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax_rate;
    cout << fixed << setprecision(2);
    cout << "Base price: $" << (double) first_item + second_item << endl;

    if (first_item > second_item) 
    {
        second_item *= 0.5;
    }
    else 
    {
        first_item *= 0.5;
    }
    if (club_card == 'Y' || club_card == 'y') 
    {
        discount_rate = (first_item + second_item) * 0.1;
    }
    else 
    {
        discount_rate = 0;
    }
    gross_price = first_item + second_item;
    price_after_discount = gross_price - discount_rate;
    price_with_tax = price_after_discount * (1 + tax_rate / 100);

    cout << "Price after discounts: $" << price_after_discount << endl;
    cout << "Total price: $" << price_with_tax << endl;

    return 0;
}