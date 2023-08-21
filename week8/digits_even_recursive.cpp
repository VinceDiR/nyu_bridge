#include <iostream>

using namespace std;

bool digits_even(int arr[], int size);

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Size should be greater than 0." << endl;
        return 1;
    }
    int *arr = new int[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if (digits_even(arr, size))
    {
        cout << "All digits are even." << endl;
    }
    else
    {
        cout << "Not all digits are even." << endl;
    }
    delete[] arr;
    return 0;
}

bool digits_even(int arr[], int size)
{
    bool result;
    if (size == 1)
    {
        return arr[0] % 2 == 0;
    }
    else
    {
        result = digits_even(arr, size - 1);
        if (result == true)
        {
            return arr[size - 1] % 2 == 0;
        }
        else
        {
            return false;
        }
    }
    return (arr[size - 1] % 2 == 0) && digits_even(arr, size - 1);
}
