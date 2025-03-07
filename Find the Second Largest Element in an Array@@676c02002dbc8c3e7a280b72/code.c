#include<stdio.h>

int secondLargest(int arr[], int size)
{
    int max = arr[0];
    int secondmax = -1;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            secondmax = max;
        }
    for(int j = i+1; j < size; j++)
    {
        if(arr[j] > max && arr[j] != max)
        {
            secondmax = arr[j];
        }
    }
    }
    return secondmax;
}

int main(void)
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i< size;i++)
    {
        scanf("%d", &arr[i]);
    }

    secondLargest(arr, size);

    return 0;
}