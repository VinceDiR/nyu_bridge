#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int num;
    cout << "Please enter a positive integer: ";
    cin >> num;
    if (num <= 0)
    {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    cout << fib(num) << endl;
    return 0;
}

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}
