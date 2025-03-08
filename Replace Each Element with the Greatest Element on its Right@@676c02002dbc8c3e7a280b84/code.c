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
    int maxRight = -1;

    for(int i = size-1; i > 0; i--)
    {
        int temp = arr[i];
        arr[i] = maxRight;
        if(temp > maxRight)
        {
            maxRight = temp;
        }
    }
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