#include <iostream>
using namespace std;

// Function prototypes
void analyze_dividers(int num, int &out_count_divs, int &out_sum_divs);
bool is_perfect(int num);

int main()
{
    int M;
    cout << "Enter a positive integer >= 2: ";
    cin >> M;

    // Print perfect numbers between 2 and M
    for (int i = 2; i <= M; i++)
    {
        if (is_perfect(i))
        {
            cout << i << " is a perfect number." << endl;
        }
    }

    // Print amicable pairs between 2 and M
    for (int i = 2; i <= M; i++)
    {
        int sum1, sum2;
        int count1, count2;
        analyze_dividers(i, count1, sum1);
        analyze_dividers(sum1, count2, sum2);
        if (sum2 == i && i != sum1 && i < sum1 && sum1 <= M)
        {
            cout << i << " and " << sum1 << " are amicable numbers." << endl;
        }
    }

    return 0;
}

void analyze_dividers(int num, int &out_count_divs, int &out_sum_divs)
{
    out_count_divs = 0;
    out_sum_divs = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            out_count_divs++;
            out_sum_divs += i;
        }
    }
}

bool is_perfect(int num)
{
    int count, sum;
    analyze_dividers(num, count, sum);
    return sum == num;
}
