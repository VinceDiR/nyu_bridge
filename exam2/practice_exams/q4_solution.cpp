#include <iostream>

using namespace std;

// Function Prototype
// Precondition: n is a pointer to an integer, m is an integer value.
// Postcondition: Returns the sum of *n and m after setting both to 10.
int f(int *n, int m);

int main()
{
    int n = 5;
    int m = 5;
    int res = f(&n, m);
    cout << res + n + m << endl;

    return 0;
}

// Function Definition
int f(int *n, int m)
{
    *n = 10;
    m = 10;
    return *n + m;
}
