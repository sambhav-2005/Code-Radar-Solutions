#include<stdio.h>

int duplicateElement(int arr[], int size)
{
    
}


int main()
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i < size;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    duplicateElement(arr, size);

    return 0;
}