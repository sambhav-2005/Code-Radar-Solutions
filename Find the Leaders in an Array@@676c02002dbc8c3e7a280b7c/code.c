#include <stdio.h>

void printLeaders(int arr[], int size)
{
    for(int i = size-1; i > 0; i--)
    {
        if(arr[i] < arr[i-1])
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i< size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printLeaders(arr, size);

    return 0;
}