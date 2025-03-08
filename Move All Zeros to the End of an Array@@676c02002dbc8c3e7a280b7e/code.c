#include<stdio.h>

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void moveZeros(int arr[], int size, int arr2[], int size_arr2)
{
    size_arr2 = 0;
    int count_of_zeros = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        {
            count_of_zeros++;
        }
        else
        {
            arr2[size_arr2] = arr[i];
            size_arr2++;
        }
    }
    
    for(int j = 0; j < count_of_zeros; j++)
    {
        arr2[size_arr2] = 0; 
        size_arr2++;
    }
}

int main(void)
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int size_arr2 = 0;
    int arr2[100];

    moveZeros(arr, size, arr2, size_arr2);
    printArray(arr2, size_arr2);

    return 0;
}