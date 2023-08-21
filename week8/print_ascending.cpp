#include <iostream>

using namespace std;

void print_asc(int start, int end);

int main()
{
    int start, end;
    cout << "Enter start: ";
    cin >> start;
    cout << "Enter end: ";
    cin >> end;
    if (start <= end)
    {
        print_asc(start, end);
        cout << endl;
    }
    else
    {
        cout << "Start should be less than or equal to end.\n";
    }
    return 0;
}

void print_asc(int start, int end)
{
    cout << start << " ";
    if (start < end)
    {
        print_asc(start + 1, end);
    }
}
