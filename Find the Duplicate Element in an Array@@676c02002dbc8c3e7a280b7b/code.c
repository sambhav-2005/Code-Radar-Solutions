#include<stdio.h>

int duplicateElement(int arr[], int size)
{
    int ans = 0;

    for(int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
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
    printf("%d", duplicateElement(arr, size));

    return 0;
}