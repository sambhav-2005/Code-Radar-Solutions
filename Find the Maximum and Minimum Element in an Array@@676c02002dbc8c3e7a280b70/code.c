#include <stdio.h>

int getMax(int arr[], int num)
{
    int max = arr[0];
    for(int i = 1; i < num; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int num)
{
    int min = arr[0];
    for(int i = 1; i < num; i++)
    {
        if(arr[i] < min)
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

    int max_num = getMax(arr, size);
    int min_num = getMin(arr, size);
    printf("%d %d", min_num, max_num);

    return 0;
}

