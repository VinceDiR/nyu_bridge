#include <iostream>

using namespace std;

// Function Prototypes
// Precondition: 'ar' points to the first element of an integer array of size 'size'.
// start_index is the index to start looking for consecutive zeros.
// Postcondition: Returns the length of the longest sequence of zeros.
int max_zero_length(int *ar, int size, int start_index);

int main()
{
    int arr[] = {0, 0, 1, 0, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int longest_zero_sequence = max_zero_length(arr, size, 0);

    cout << "The length of the longest sequence of zeroes is: " << longest_zero_sequence << endl;

    return 0;
}

// Function Definitions

int max_zero_length(int *ar, int size, int start_index)
{
    if (size <= start_index)
    {
        return 0;
    }
    int current_longest = 0;
    while (start_index < size && ar[start_index++] == 0)
    {
        current_longest++;
    }
    int recursive_longest = max_zero_length(ar, size, start_index);
    return max(current_longest, recursive_longest);
}
