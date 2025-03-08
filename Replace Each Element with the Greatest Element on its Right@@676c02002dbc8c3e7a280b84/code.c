#include <stdio.h>

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapRight(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    arr[size-1] = -1;
}

int main(void)
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    swapRight(arr, size);
    printArray(arr, size);

    return 0;
}