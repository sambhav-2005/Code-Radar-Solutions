#include<stdio.h>
#include<limits.h>


int largestEven(int arr[], int size)
{
    int largest = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > largest && arr[i] % 2 == 0)
        {
            largest = arr[i];
        }
        else if(arr[i] > largest && arr[i] % 2 != 0)
        {
            largest = -1;
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