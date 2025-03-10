#include<stdio.h>
#include<limits.h>

int secondSmallest(int arr[], int size)
{
    int smallest = arr[0];
    int secondsmallest = INT_MAX;
    if (size == 1)
    {
        secondsmallest = arr[0];
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondsmallest && arr[i] != smallest)
        {
            secondsmallest = arr[i];
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
        scanf("%d", arr[i]);
    }

    int secondel = secondSmallest(arr, size);
    printf("%d", secondel);

}