/* Takes input from user as two positive integers n, k and prints the value of n choose k. */
#include <iostream>
using namespace std;

int main()
{
    int n, k, i, n_fact = 1, k_fact = 1, n_k_fact = 1;
    cout << "Please enter n and k (n >= k):" << endl;
    cin >> n >> k;

    for (i = 1; i <= n; i++)
    {
        n_fact *= i;
    }

    for (i = 1; i <= k; i++)
    {
        k_fact *= i;
    }

    for (i = 1; i <= n - k; i++)
    {
        n_k_fact *= i;
    }

    cout << n << " choose " << k << " is " << n_fact / (k_fact * n_k_fact) << endl;

    return 0;
}