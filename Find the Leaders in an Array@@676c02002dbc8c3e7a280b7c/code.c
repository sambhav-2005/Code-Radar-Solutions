#include <stdio.h>

int printLeaders(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                
                printf("%d ",arr[i])
            }
        }
    }
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

    printf("%d ",printLeaders(arr, size));

    return 0;
}