#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);

    }
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + i;
        printf("%d ", sum);
    }

    return 0;
}