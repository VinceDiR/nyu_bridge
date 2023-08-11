#include <iostream>
#include <cmath>
using namespace std;

void print_divisors(int num);

int main()
{
    int num;
    cout << "Please enter a positive integer >= 2: ";
    cin >> num;

    if (num < 2)
    {
        cout << "Number should be >= 2" << endl;
        return 1;
    }

    print_divisors(num);
    return 0;
}

void print_divisors(int num)
{
    int limit = sqrt(num);

    for (int i = 1; i <= limit; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }

    for (int i = limit - 1; i >= 1; i--)
    {
        if (num % i == 0 && i != num / i)
        {
            cout << num / i << " ";
        }
    }

    cout << endl;
}
