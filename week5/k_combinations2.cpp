/* Takes input from user as two positive integers n, k and prints the value of n choose k. */
#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, k;
    cout << "Please enter n and k (n >= k):" << endl;
    cin >> n >> k;

    int n_fact = factorial(n);
    int k_fact = factorial(k);
    int nk_fact = factorial(n - k);

    cout << n << " choose " << k << " is " << n_fact / (k_fact * nk_fact) << endl;

    return 0;
}
