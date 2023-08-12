#include <iostream>
using namespace std;

void resize_array(int *&arr, int &size, int new_size)
{
    int *new_arr = new int[new_size];
    for (int i = 0; i < size; i++)
    {
        new_arr[i] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
    size = new_size;
}

int main()
{
    int size = 10;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 10;
    }
    int one_more = 110;
    int new_size = size * 2;
    resize_array(arr, size, new_size);
    size = new_size;
    arr[size++] = one_more;
}