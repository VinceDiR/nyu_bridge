#include <iostream>
using namespace std;

void reverseArray(int arr[], int arr_size);
void removeOdd(int arr[], int &arr_size);
void splitParity(int arr[], int arr_size);
void printArray(int arr[], int arrSize);

int main()
{
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);
    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);
    return 0;
}

void printArray(int arr[], int arrSize)
{
    int i;
    for (i = 0; i < arrSize; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void reverseArray(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size / 2; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[arr_size - i - 1];
        arr[arr_size - i - 1] = temp;
    }
}

void removeOdd(int arr[], int &arr_size)
{
    int write_index = 0;
    for (int i = 0; i < arr_size; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            arr[write_index++] = arr[i];
        }
    }
    arr_size = write_index;
}

void splitParity(int arr[], int arr_size)
{
    int write_index = 0;
    for (int i = 0; i < arr_size; ++i)
    {
        if (arr[i] % 2 != 0)
        {
            int temp = arr[write_index];
            arr[write_index++] = arr[i];
            arr[i] = temp;
        }
    }
}
