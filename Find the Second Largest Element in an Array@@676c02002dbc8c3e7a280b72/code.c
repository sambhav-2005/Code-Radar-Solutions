#include<stdio.h>
#include<limits.h>

int secondLargest(int arr[], int size)
{
    if(size < 2)
    {
        return -1;
    }
    int max = arr[0];
    int secondmax = INT_MIN;


    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            secondmax = max;
            max = arr[i];
        }
        else if(arr[i] > secondmax && arr[i] != max)
        {
            secondmax = arr[i];
        }
    }
    return (secondmax == INT_MIN) ? -1 : secondmax;
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