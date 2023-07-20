/* Take user input which is simple arithmetic problem and output value */
#include <iostream>
using namespace std;

int main() {
    double arg1, arg2, result;
    char op;

    cout << "Please enter an expression in the form arg1 op arg2: ";
    cin >> arg1 >> op >> arg2;
    
    switch(op) {
        case '+':
            result = arg1 + arg2;
            break;
        case '-':
            result = arg1 - arg2;
            break;
        case '*':
            result = arg1 * arg2;
            break;
        case '/':
            if (arg2 == 0) {
                cout << "Cannot divide by zero." << endl;
                return 0;
            }
            result = arg1 / arg2;
            break;
        default:
            cout << "Invalid operator." << endl;
            return 0;
    }
    cout << arg1 << " " << op << " " << arg2 << " = " << result << endl;
    return 0;
}