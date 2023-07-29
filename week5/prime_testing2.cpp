#include <iostream>
using namespace std;

bool is_prime(int num)
{
    int div_count = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            div_count++;
        }
        if (div_count == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (is_prime(num))
    {
        cout << num << " is prime." << endl;
    }
    else
    {
        cout << num << " is composite." << endl;
    }
    return 0;
}
