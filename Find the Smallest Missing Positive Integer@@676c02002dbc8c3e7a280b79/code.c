#include<stdio.h>

void selectionSort(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int minimum = i;
        for(int j = i + 1;j < size; j++)
        {
            if(arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        int temp;
        temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }
}

int smallestMissing(int arr[], int size)
{
    selectionSort(arr, size);

    int missing;
    for(int i = 0; i < size; i++)
    {
        for(int j = 1; j <= size; j++)
        {
            if(arr[i] != j)
            {
                missing = j;
            }
        }
    }
    return missing;
}

int main(void)
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int smallestmissing = smallestMissing(arr, size);

    printf("%d", smallestmissing);

    return 0;
}