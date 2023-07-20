#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Please enter two positive integers, separated by a space:\n";
    cin >> num1 >> num2;

    int sum = num1 + num2;
    int diff = num1 - num2;
    int mult = num1 * num2;
    float div = (double) num1 / (double) num2; // cast to double to get decimal

    int div_int = num1 / num2;
    int mod = num1 % num2;

    cout << num1 << " + " << num2 << " = " << sum << '\n'
              << num1 << " - " << num2 << " = " << diff << '\n'
              << num1 << " * " << num2 << " = " << mult << '\n'
              << num1 << " / " << num2 << " = " << div << '\n'
              << num1 << " div " << num2 << " = " << div_int << '\n'
              << num1 << " mod " << num2 << " = " << mod << '\n';

    return 0;
}
