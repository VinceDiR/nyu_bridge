#include <iostream>
using namespace std;

int analyze_digits(int num, int &out_sum);

int main()
{
    int num, count_digits = 0, sum_digits = 0;
    cout << "Enter a positive integer: ";
    cin >> num;

    count_digits = analyze_digits(num, sum_digits);

    cout << "The number " << num << " has " << count_digits << " digits and their sum is " << sum_digits << "." << endl;

    return 0;
}

int analyze_digits(int num, int &out_sum)
{
    int count = 0, sum = 0, current_digit = 0;

    while (num > 0)
    {
        current_digit = num % 10;
        count++;
        sum += current_digit;
        num /= 10;
    }
    out_sum = sum;
    return count;
}