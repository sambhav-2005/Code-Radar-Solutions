#include<stdio.h>

int smallestMissing(int arr[], int size)
{
    int missing;
    int max = sizeof(arr)/ sizeof(int);
    for(int i = 0; i < size; i++)
    {
        for(int j = 1; j <= max; j++)
        {
            if(arr[i] != j)
            {
                missing = j;
            }
        }
    }
    return missing;
}

int main(void)
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int smallestmissing = smallestMissing(arr, size);

    printf("%d", smallestmissing);

    return 0;
}