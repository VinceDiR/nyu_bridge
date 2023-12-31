#include <iostream>
using namespace std;

const int MAX_STUDENTS = 100;

int main()
{
    int num_students;
    int grades_list[MAX_STUDENTS];

    // Read the number of students
    cout << "Enter the number of students (max. " << MAX_STUDENTS << "): \n";
    cin >> num_students;

    // Check if number of students exceeds the limit
    if (num_students > MAX_STUDENTS)
    {
        cout << "Exceeded maximum number of students. Exiting program.";
        return 0;
    }

    // Read the grades of students
    for (int i = 0; i < num_students; i++)
    {
        bool validGrade = false;
        while (!validGrade)
        {
            cout << "Enter the grade of student " << i + 1 << ": ";
            cin >> grades_list[i];

            // Check if the grade is valid
            if (grades_list[i] < 0 || grades_list[i] > 100)
            {
                cout << "Invalid grade. Please enter a grade between 0 and 100.\n";
            }
            else
            {
                validGrade = true;
            }
        }
    }

    // Calculate the average
    int sum = 0;
    for (int i = 0; i < num_students; i++)
    {
        sum += grades_list[i];
    }
    double average = (double)sum / (double)num_students;

    // Print the average
    cout << "The average is: " << average << endl;

    // Print the grades and students above the average
    cout << "The students and grades above the average are: \n";
    for (int i = 0; i < num_students; i++)
    {
        if (grades_list[i] > average)
        {
            cout << "Student " << i + 1 << ": " << grades_list[i] << endl;
        }
    }
    return 0;
}
