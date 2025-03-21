#include<stdio.h>

int medianEl(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int median;
    if(size % 2 == 0)
    {
        median = arr[(mid + (mid + 1)) / 2];
    }
    else
    {
        median = arr[mid];
    }
    
    return median;
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