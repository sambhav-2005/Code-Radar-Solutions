#include<stdio.h>

int medianEl(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;


    return mid;
}

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int median = medianEl(arr, size);
    printf("%d", median);

    return 0;
}