#include <stdio.h>

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void runningSum(int arr[], int size, int arr2[])
{
    int sum = 0;
    int size_arr2 = 0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        arr2[size_arr2] = sum;
        size_arr2++;
    }
}

int main()
{
    int arr[100];
    int size;
    scanf("%d", &size);

    int size_arr2 = 0;
    int arr2[100];

    runningSum(arr, size, arr2);
    printArray(arr2, size_arr2);

    return 0;
}