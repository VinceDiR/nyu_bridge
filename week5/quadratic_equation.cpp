#include <iostream>
#include <cmath>
using namespace std;

// Constants to represent types of solutions to an equation
const int NO_SOLUTIONS = 0;
const int ONE_REAL_SOLUTION = 1;
const int TWO_REAL_SOLUTIONS = 2;
const int ALL_REALS = 3;
const int NO_REAL_SOLUTIONS = 4;

/*
Quadratic function solves the quadratic equation a*x^2 + b*x + c = 0
Input: a, b, c - coefficients of the equation
Output: 1. Type of solutions
        2. x1, x2 - solutions of the equation
Assumptions: 1. If equarion has one real solution it will be returned in x1.
            2. If equation has no real solutions x1 and x2 are not defined.
*/

int quadratic(double a, double b, double c, double &x1, double &x2);
int linear(double a, double b, double &x1);

int main()
{
    double a, b, c, x1, x2;
    int type;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    cout << "Equation: " << a << "*x^2 + " << b << "*x + " << c << " = 0" << endl;
    switch (quadratic(a, b, c, x1, x2))
    {
    case NO_SOLUTIONS:
        cout << "No solutions" << endl;
        break;
    case ONE_REAL_SOLUTION:
        cout << "One real solution: " << x1 << endl;
        break;
    case TWO_REAL_SOLUTIONS:
        cout << "Two real solutions: " << x1 << " and " << x2 << endl;
        break;
    case ALL_REALS:
        cout << "All real numbers are solutions" << endl;
        break;
    case NO_REAL_SOLUTIONS:
        cout << "No real solutions" << endl;
        break;
    default:
        cout << "Error" << endl;
        break;
    }
    return 0;
}

int quadratic(double a, double b, double c, double &x1, double &x2)
{
    double delta;
    if (a != 0.0)
    {
        delta = b * b - 4 * a * c;
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            return TWO_REAL_SOLUTIONS;
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            return ONE_REAL_SOLUTION;
        }
        else
        {
            return NO_REAL_SOLUTIONS;
        }
    }
    else
    {
        return linear(b, c, x1);
    }
}

int linear(double b, double c, double &x1)
{
    double x;
    if (b != 0.0)
    {
        x = -c / b;
        x1 = x;
        return ONE_REAL_SOLUTION;
    }
    else
    {
        if (c != 0.0)
        {
            return NO_SOLUTIONS;
        }
        else
        {
            return ALL_REALS;
        }
    }
}