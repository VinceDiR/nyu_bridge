#include <iostream>
using namespace std;

int search(int array[], int size, int target);

int main()
{
    int arr[10] = {10, 20, 5, -5, 6, 7, 200, 900, 1};

    int x;
    cout << "Enter a number to search for: ";
    cin >> x;

    int index = search(arr, 10, x);
    if (index != -1)
    {
        cout << "Found at index: " << index << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}

int search(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}
