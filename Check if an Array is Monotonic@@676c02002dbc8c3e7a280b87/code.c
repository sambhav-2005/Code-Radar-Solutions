#include<stdio.h>
#include<stdbool.h>

bool checkMonotonic(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < arr[i+1])
        {
            return true;
        }
        else if(arr[i] > arr[i+1])
        {
            return true;
        }
        else
        {
            return false;
        }
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

    if(checkMonotonic(arr, size))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}