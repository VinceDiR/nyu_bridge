/* Program reads reads grades of students in a class and computers the average */
#include <iostream>
using namespace std;

int main()
{
    int num_students, grade, sum = 0;
    double average;

    cout << "Enter the number of students: ";
    cin >> num_students;

    cout << "Enter the students' grades (seperated by a space): ";
    for (int count = 1; count <= num_students; count++)
    {
        cin >> grade;
        sum += grade;
    }

    average = (double) sum / (double) num_students;
    cout << "Average grade: " << average << endl;

    return 0;
}