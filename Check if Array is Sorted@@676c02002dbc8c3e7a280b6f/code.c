#include<stdio.h>

bool sorted(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < arr[i+1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0;i < size;i++)
    {
        scanf("%d", &arr[i]);
    }

    if(sorted(arr, size))
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }

    return 0;
}