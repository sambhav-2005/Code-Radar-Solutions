#include <stdio.h>

int getMax(int arr[], int num)
{
    int max = INT32_MIN;
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
    int min = INT32_MAX;
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

    int max_num = getMax(arr, size);
    int min_num = getMin(arr, size);
    printf("%d %d", min_num, max_num);

    return 0;
}

