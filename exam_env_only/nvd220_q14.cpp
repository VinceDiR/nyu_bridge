#include <iostream>

using namespace std;

int main()
{
    int num;
    int perfect_square_count = 0, perfect_number_count = 0;

    cout << "Please enter a sequence of integers (with at least 1-digit and at most 9- digits), each one in a separate line. End your sequence by typing -1:" << endl;

    while (true)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }

        int possible_sqrt = 1;
        while (possible_sqrt * possible_sqrt < num)
        {
            possible_sqrt++;
        }
        if (possible_sqrt * possible_sqrt == num)
        {
            perfect_square_count++;
        }

        int sum = 1;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num)
        {
            perfect_number_count++;
        }
    }

    cout << "Total count of Perfect Squares in the given sequence: " << perfect_square_count
         << " Total count of Perfect Numbers in the given sequence: " << perfect_number_count << endl;

    return 0;
}
