#include <iostream>
using namespace std;

int main()
{
    bool done = false;
    int sum = 0, student_count = 0, grade;

    cout << "Enter the grades separated by a space" << endl;
    cout << "End the sequence by typing -1:" << endl;

    while (!done)
    {
        cin >> grade;
        if (grade == -1)
        {
            done = true;
        }
        else
        {
            sum += grade;
            student_count++;
        }
    }

    cout << "Average grade: " << (double)sum / (double)student_count << endl;

    return 0;
}