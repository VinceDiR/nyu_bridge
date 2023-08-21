#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
    }
    else
    {
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }
    return 0;
}

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}