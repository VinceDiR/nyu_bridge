#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int num = i;
        int even_count = 0;
        int odd_count = 0;

        while (num > 0)
        {
            if ((num % 10) % 2 == 0)
                even_count++;
            else
                odd_count++;

            num /= 10;
        }

        if (even_count > odd_count)
        {
            cout << i << endl;
        }
    }

    return 0;
}
