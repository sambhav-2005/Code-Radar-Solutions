#include<stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int start = 0;
    int end = size - 1;
    int mid = (start + end)/ 2;

    printf("%d", arr[mid]);
}