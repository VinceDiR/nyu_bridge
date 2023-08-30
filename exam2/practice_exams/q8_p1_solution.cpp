#include <iostream>

using namespace std;

// Function Prototypes
// Precondition: 'ar' is a pointer to an integer array of size 'size'.
// Postcondition: All zeros in the array are moved to the end while maintaining the relative order of the non-zero elements.
void move_zeros(int *ar, int size);

int main()
{
    int arr[] = {0, 2, 0, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    move_zeros(arr, size);

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}

// Function Definitions

void move_zeros(int *ar, int size)
{
    int current_index = 0;
    for (int x = 0; x < size; ++x)
    {
        if (ar[x] != 0)
        {
            ar[current_index] = ar[x];
            ++current_index;
        }
    }
    for (int j = current_index; j < size; ++j)
    {
        ar[j] = 0;
    }
}
