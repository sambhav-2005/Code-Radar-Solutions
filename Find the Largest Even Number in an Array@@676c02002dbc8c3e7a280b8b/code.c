#include<stdio.h>

int largestEven(int arr[], int size)
{
    int largest = -10000000;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > largest && arr[i] % 2 == 0)
        {
            largest = arr[i];
        }
    }
    return largest;
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

    printf("%d", largestEven(arr, size));

    return 0;
}