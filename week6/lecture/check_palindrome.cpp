/* Check whether an input positive integer is a palindrome. */
#include <iostream>
using namespace std;

bool check_palindrome(int n);

int main()
{
    cout << "Enter a positive integer: ";
    int n;
    cin >> n;

    int result = check_palindrome(n);

    if (result == 1)
    {
        cout << n << " is a palindrome." << endl;
    }
    else
    {
        cout << n << " is not a palindrome." << endl;
    }
    return 0;
}

bool check_palindrome(int n)
{
    int reversed = 0;
    int original = n;

    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    if (original == reversed)
    {
        return true;
    }
    else
    {
        return false;
    }
}