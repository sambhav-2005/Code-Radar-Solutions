#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("%d %d", a, b);
}
void reversed(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr, size);
}
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
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
    reversed(arr, size);
}