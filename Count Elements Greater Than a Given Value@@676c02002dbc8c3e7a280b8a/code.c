#include<stdio.h>

int count(int arr[], int size, int k)
{
    int count = 0;
    for(int i = 0, i < size, i++)
    {
        if(arr[i] > k)
        {
            count = count + 1;
        }
    }
    return count;
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

    int result = count(arr, size, k);
    printf("%d", result);

    return 0;
}