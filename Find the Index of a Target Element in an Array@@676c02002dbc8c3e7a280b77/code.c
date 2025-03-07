#include <stdio.h>

int targetIndex(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if{arr[i] == target}
        {
            return i;
        }
    }
    

}

int main(void)
{
    int arr[100];
    int size;
    scanf("%d", &size);

    for(int i = 0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    printf("%d", targetIndex(arr, size, target));
    return 0;
}