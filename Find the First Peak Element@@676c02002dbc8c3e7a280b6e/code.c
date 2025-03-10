#include <stdio.h>

int peakElement(int arr[], int size)
{
    int peak;
    for(int i = 0; i < size;i++)
    {
        if(i == 0 && arr[0] > arr[1])
        {
            peak = arr[0];
        }
        else if(i == size-1 && arr[size-1] > arr[size-2])
        {
            peak = arr[size-1];
        }
        else if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
        {
            peak = arr[i];
            break;
        }
        else
        {
            peak = -1;
        }
    }
    return peak;
}

int main(void)
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i < size;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", peakElement(arr, size));

    return 0;
}