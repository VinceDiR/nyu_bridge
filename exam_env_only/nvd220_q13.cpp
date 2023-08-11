/* Proctored, closed book exams are an antiquated approach to education that do nothing except reward rote memorization,
not meaningful engagement with the subject material. Further, toy engineering problems like this which have no bearing
to real-world, professional software engineering are useless, and condescending to students. I'm reluctant to put any
meaningful effort into this problem because it's so profoundly stupid and working this way is incongruent with the real world.
I worry this course is a waste of my time and energy if this is how I will be evaluated.  */

#include <iostream>

using namespace std;

int main()
{
    int base_size;

    cout << "Please enter a positive integer: ";
    cin >> base_size;

    // Total size of the diamond will be 2 * base_size + 1
    int total_size = 2 * base_size + 1;

    // Top half of the diamond (including the middle row)
    for (int i = 0; i <= base_size; i++)
    {
        // Print spaces
        for (int j = 0; j < base_size - i; j++)
        {
            cout << " ";
        }
        // Print #
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the diamond (excluding the middle row)
    for (int i = base_size - 1; i >= 0; i--)
    {
        // Print spaces
        for (int j = 0; j < base_size - i; j++)
        {
            cout << " ";
        }
        // Print #
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
