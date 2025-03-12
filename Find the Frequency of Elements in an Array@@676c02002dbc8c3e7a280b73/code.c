#include <stdio.h>

void frequencyCount(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int element = arr[i];
        int counter = 1;
        for(int j = i+1; j < size; j++)
        {
            if(arr[j] == element)
            {
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    int arr[size];
    int size;

    scanf("%d", &size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    frequencyCount(arr, size);
    

    return 0;
}