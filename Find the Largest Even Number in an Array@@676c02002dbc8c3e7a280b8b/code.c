#include<stdio.h>
#include<limits.h>


int largestEven(int arr[], int size)
{
    int largest = INT_MIN;
    int found = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            if(arr[i] > largest)
            {
                largest = arr[i];
            }
            found = 1;
        }
    }
    return found ?  largest : -1;
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