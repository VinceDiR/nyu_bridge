#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    double num_solutions, solve1, solve2;

    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "This equation has an infinite number of solutions.\n";
            }
            else
            {
                cout << "This equation has no solution.\n";
            }
        }
        else
        {
            solve1 = -c / b;
            cout << "This equation has one real solution: " << fixed << setprecision(1) << solve1 << "\n";
        }
    }
    else
    {
        num_solutions = (b * b) - (4.0 * a * c);
        if (num_solutions > 0)
        {
            solve1 = (-b + sqrt(num_solutions)) / (2.0 * a);
            solve2 = (-b - sqrt(num_solutions)) / (2.0 * a);
            cout << "This equation has two real solutions: x = " << fixed << setprecision(1) << solve1 << " or x = " << solve2 << "\n";
        }
        else if (num_solutions == 0)
        {
            solve1 = -b / (2.0 * a);
            cout << "This equation has a real solution: x = " << fixed << setprecision(1) << solve1 << "\n";
        }
        else
        {
            cout << "This equation has no real solution.\n";
        }
    }

    return 0;
}
