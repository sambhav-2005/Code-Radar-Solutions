#include<stdio.h>

void pairSum(int arr[], int size, int targetSum)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d %d\n", arr[i], arr[j]);
                break;
            }
            if(arr[i] + arr[j] == targetSum)
            {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
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

    int targetSum;
    scanf("%d", &targetSum);

    pairSum(arr, size, targetSum);

    return 0;
}