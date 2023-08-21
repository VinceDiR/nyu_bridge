#include <iostream>

using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize);
// Precondition: arr contains arrSize integers.
// Postcondition: All odd numbers in arr will be placed before all even numbers.
//                Odd numbers will keep their original relative order.
//                Even numbers will be placed in reversed order relative to their original order.

int main()
{
    int arr[] = {5, 2, 11, 7, 6, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < arrSize; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    oddsKeepEvensFlip(arr, arrSize);

    cout << "Reordered array: ";
    for (int i = 0; i < arrSize; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void oddsKeepEvensFlip(int arr[], int arrSize)
{
    int *result = new int[arrSize];
    int oddIndex = 0;
    int evenIndex = arrSize - 1;

    // Place odd numbers at the beginning of result array
    // Place even numbers at the end of result array in reverse order
    for (int i = 0; i < arrSize; ++i)
    {
        if (arr[i] % 2 == 1)
        {
            result[oddIndex++] = arr[i];
        }
        else
        {
            result[evenIndex--] = arr[i];
        }
    }

    // Copy the result back to the original array
    for (int i = 0; i < arrSize; ++i)
    {
        arr[i] = result[i];
    }

    delete[] result;
}
