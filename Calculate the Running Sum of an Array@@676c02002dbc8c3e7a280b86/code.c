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
    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        arr2[i] = sum;
    }
}

int main()
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int arr2[100];

    runningSum(arr, size, arr2);
    printArray(arr2, size);

    return 0;
}