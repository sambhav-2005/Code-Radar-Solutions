#include<stdio.h>

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void rotateArray(int arr[], int size, int k)
{
    k = k%size;
    int temp[k];

    for(int i = 0; i < k; i++)
    {
        temp[i] = arr[size-k+i];
    }
    for(int i = size-1; i>=k; i--)
    {
        arr[i] = arr[i-k];

    }

    for(int i = 0; i<k; i++)
    {
        arr[i] = temp[i];
    }
}

int main(void)
{
    int arr[100];
    int size;

    scanf("%d", &size);
    for(int i = 0; i < size;i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);


    rotateArray(arr, size, k);
    printArray(arr, size);

    return 0;
}