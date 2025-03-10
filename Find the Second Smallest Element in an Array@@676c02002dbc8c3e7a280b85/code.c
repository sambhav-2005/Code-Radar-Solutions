#include <stdio.h>
#include <limits.h>

int secondSmallest(int arr[], int size)
{
    int smallest = arr[0];
    int secondsmallest = INT_MAX;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < smallest)
        {
            secondsmallest = arr[i];
            smallest = secondsmallest;

        }

    }
    return secondsmallest;
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

    printf("%d", secondSmallest(arr, size));

    return 0;
}
