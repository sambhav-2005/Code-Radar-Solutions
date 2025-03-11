#include <stdio.h>

void runningSum(int arr[], int size, int arr2[][i])
{
    int sum = 0;
    int size_arr2 = 0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        arr2[][i] = sum;
    }

}

int main()
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &size);
    }
    int size_arr2 = 0;
    int arr2[100];

    runningSum(arr, size, arr2, size_arr2);
}