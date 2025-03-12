#include <stdio.h>

int frequencyCount(int arr[], int size)
{
    int counter = 1;
    for(int i = 0; i < size; i++)
    {
        int element = arr[i];
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
    int size;
    scanf("%d", &size);
    
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    frequencyCount(arr, size);
    

    return 0;
}