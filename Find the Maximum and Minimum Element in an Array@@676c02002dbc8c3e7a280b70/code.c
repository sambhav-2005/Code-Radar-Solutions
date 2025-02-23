#include <stdio.h>

int getMax(int arr[], int num)
{
    int max = INT_MIN;
    for(int i = 0; i < num; i++)
    {
        if(i > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int num)
{
    int min = INT_MAX;
    for(int i = 0; i < num; i++)
    {
        if(i < min)
        {
            min = arr[i];
        }
    }
    return min;
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
    printf("%d", getMin(arr, size));
    printf("%d", getMax(arr, size));
}

