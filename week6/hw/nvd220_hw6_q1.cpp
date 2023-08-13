#include <iostream>

using namespace std;

int min_in_array(int arr[], int arr_size);
void find_indices(int arr[], int arr_size, int value, int indices[], int &indices_count);

int main()
{
    int arr[20];
    int arr_size = 20;

    cout << "Please enter 20 integers separated by a space:\n";
    for (int i = 0; i < arr_size; ++i)
    {
        cin >> arr[i];
    }

    int min_value = min_in_array(arr, arr_size);
    int indices[20];
    int indices_count = 0;
    find_indices(arr, arr_size, min_value, indices, indices_count);

    cout << "The minimum value is " << min_value << ", and it is located in the following indices: ";
    for (int i = 0; i < indices_count; ++i)
    {
        cout << indices[i] << " ";
    }
    cout << "\n";

    return 0;
}

int min_in_array(int arr[], int arr_size)
{
    int min_value = arr[0];
    for (int i = 1; i < arr_size; ++i)
    {
        if (arr[i] < min_value)
        {
            min_value = arr[i];
        }
    }
    return min_value;
}

void find_indices(int arr[], int arr_size, int value, int indices[], int &indices_count)
{
    indices_count = 0;
    for (int i = 0; i < arr_size; ++i)
    {
        if (arr[i] == value)
        {
            indices[indices_count++] = i;
        }
    }
}
