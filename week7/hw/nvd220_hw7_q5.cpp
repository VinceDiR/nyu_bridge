#include <iostream>

using namespace std;

int *getPosNums1(int *arr, int arrSize, int &outPosArrSize);
// Precondition: arr points to an array of size arrSize
// Postcondition: returns the base address of a new array containing only the positive numbers from arr, and updates outPosArrSize with the logical size of the new array

int *getPosNums2(int *arr, int arrSize, int *outPosArrSizePtr);
// Similar to getPosNums1, but uses a pointer to update the logical size

void getPosNums3(int *arr, int arrSize, int *&outPosArr, int &outPosArrSize);
// Similar to getPosNums1, but updates the output parameters with the base address and logical size

void getPosNums4(int *arr, int arrSize, int **outPosArrPtr, int *outPosArrSizePtr);
// Similar to getPosNums1, but uses pointers to update the base address and logical size

int main()
{
    int arr[] = {3, -1, -3, 0, 6, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int outPosArrSize;
    int *outPosArrSizePtr = &outPosArrSize;
    int *outPosArr;
    int **outPosArrPtr = &outPosArr;

    cout << "Original array: ";
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int *result1 = getPosNums1(arr, arrSize, outPosArrSize);
    cout << "getPosNums1: ";
    for (int i = 0; i < outPosArrSize; i++)
    {
        cout << result1[i] << " ";
    }
    cout << "\n";
    delete[] result1;

    int *result2 = getPosNums2(arr, arrSize, outPosArrSizePtr);
    cout << "getPosNums2: ";
    for (int i = 0; i < *outPosArrSizePtr; i++)
    {
        cout << result2[i] << " ";
    }
    cout << "\n";
    delete[] result2;

    getPosNums3(arr, arrSize, outPosArr, outPosArrSize);
    cout << "getPosNums3: ";
    for (int i = 0; i < outPosArrSize; i++)
    {
        cout << outPosArr[i] << " ";
    }
    cout << "\n";
    delete[] outPosArr;

    getPosNums4(arr, arrSize, outPosArrPtr, outPosArrSizePtr);
    cout << "getPosNums4: ";
    for (int i = 0; i < *outPosArrSizePtr; i++)
    {
        cout << (*outPosArrPtr)[i] << " ";
    }
    cout << "\n";
    delete[] *outPosArrPtr;

    return 0;
}

int *getPosNums1(int *arr, int arrSize, int &outPosArrSize)
{
    int count = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }

    int *result = new int[count];
    int j = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            result[j++] = arr[i];
        }
    }

    outPosArrSize = count;
    return result;
}

int *getPosNums2(int *arr, int arrSize, int *outPosArrSizePtr)
{
    int outPosArrSize;
    int *result = getPosNums1(arr, arrSize, outPosArrSize);
    *outPosArrSizePtr = outPosArrSize;
    return result;
}

void getPosNums3(int *arr, int arrSize, int *&outPosArr, int &outPosArrSize)
{
    outPosArr = getPosNums1(arr, arrSize, outPosArrSize);
}

void getPosNums4(int *arr, int arrSize, int **outPosArrPtr, int *outPosArrSizePtr)
{
    int outPosArrSize;
    *outPosArrPtr = getPosNums1(arr, arrSize, outPosArrSize);
    *outPosArrSizePtr = outPosArrSize;
}
