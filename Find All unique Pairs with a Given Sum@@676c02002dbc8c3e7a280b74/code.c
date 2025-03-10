#include <stdio.h>

void printPairs(int arr2[][2], int size_arr2)
{
    for(int i = 0; i < size_arr2; i++)
    {
        printf("%d %d\n", arr2[i][0], arr2[i][1]);
    }
}

int pairSum(int arr[], int size, int targetSum, int arr2[][2])
{
    int size_arr2 = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] + arr[j] == targetSum)
            {
                arr2[size_arr2][0] = arr[i];
                arr2[size_arr2][1] = arr[j];
                size_arr2++;
            }
            break;
        }
    }
    return size_arr2;
}

int main()
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int targetSum;
    scanf("%d", &targetSum);

    int arr2[100][2];
    int size_arr2 = pairSum(arr, size, targetSum, arr2);
    printPairs(arr2, size_arr2);

}