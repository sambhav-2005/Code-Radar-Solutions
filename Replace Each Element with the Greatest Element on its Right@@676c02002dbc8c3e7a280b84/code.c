#include <stdio.h>

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void replaceRight(int arr[], int size)
{
    int i = 0;
    while(i < size)
    {
        if(arr[i+1] > arr[i])
        {
            arr[i] = arr[i+1];
        }
        i++;
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

    replaceRight(arr, size);
    printArray(arr, size);

    return 0;
}