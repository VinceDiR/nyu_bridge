#include <iostream>

int *find_missing(int arr[], int n, int &res_arr_size)
{
    bool *present = new bool[n + 1];
    for (int i = 0; i <= n; ++i)
    {
        present[i] = false; // Initialize all elements to false
    }

    // Mark the numbers that are present in arr[]
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= n)
        {
            present[arr[i]] = true;
        }
    }

    // Count the missing numbers
    int missing_count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (!present[i])
        {
            missing_count++;
        }
    }

    // Create and fill the result array with missing numbers
    int *res_arr = new int[missing_count];
    int index = 0;
    for (int i = 0; i <= n; i++)
    {
        if (!present[i])
        {
            res_arr[index++] = i;
        }
    }

    delete[] present; // Freeing the dynamically allocated array
    res_arr_size = missing_count;
    return res_arr;
}

int main()
{
    int arr[] = {3, 1, 3, 0, 6, 4};
    int n = 6;
    int res_arr_size;
    int *res_arr = find_missing(arr, n, res_arr_size);

    std::cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nMissing numbers: ";
    for (int i = 0; i < res_arr_size; i++)
    {
        std::cout << res_arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] res_arr; // Freeing the dynamically allocated memory
    return 0;
}
