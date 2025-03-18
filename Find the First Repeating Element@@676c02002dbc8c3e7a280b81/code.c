#include<stdio.h>

int firstRepeating(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}

int main(void)
{
    int size;
    scanf("%d", &size);
    int arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", firstRepeating(arr, size));

    return 0;
}