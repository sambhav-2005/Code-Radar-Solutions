#include<stdio.h>

void printArray(int arr[], int size)
{
    for(int i = 0; i < size;i++)
    {
        printf("%d", arr[i]);
    }
}

void rotateArray(int arr[], int size, int k)
{
    k = k % size; // ensure k is within size of the array.
    int temp[k]; // create an temporary array with size k. (k == no. of positions)

    for(int i = 0;i < k; i++)
    {
        temp[i] = arr[size-k+i]; // Copying the elements into temp array from original array from kth position from last.
    }
    for(int j = size-1; j>=k;j--)
    {
        arr[j] = arr[j-k]; // Shifting the remaining elements to right most.
    }
    for(int m = 0; m < k; i++)
    {
        arr[i] = temp[i]; // Copying back the elements from temp array to begining of the original array.
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
    int k;
    scanf("%d", &k);

    rotateArray(arr, size, k);
    printArray(arr, size);

    return 0;
}