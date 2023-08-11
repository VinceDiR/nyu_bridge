#include <iostream>
using namespace std;

double e_approx(int n);

int main()
{
    cout.precision(30);
    for (int n = 1; n <= 15; n++)
    {
        cout << "n = " << n << '\t' << e_approx(n) << endl;
    }
    return 0;
}

double e_approx(int n)
{
    double sum = 1.0;
    double factorial = 1.0;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sum += 1.0 / factorial;
    }

    return sum;
}
