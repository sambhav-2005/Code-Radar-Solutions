#include<stdio.h>

int secondLargest(int arr[], int size)
{
    int max = arr[0];
    int secondmax = -1;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            secondmax = max;
            max = arr[i];
        }
        else if(arr[i] > second max && arr[i] != max)
        {
            secondmax = arr[i];
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

    printf("%d", secondLargest(arr, size));

    return 0;
}