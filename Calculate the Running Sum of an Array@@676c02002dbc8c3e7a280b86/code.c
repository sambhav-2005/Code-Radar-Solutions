#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    scanf("%d", &size);
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        printf("%d ", sum);
    }
    
    return 0;
}