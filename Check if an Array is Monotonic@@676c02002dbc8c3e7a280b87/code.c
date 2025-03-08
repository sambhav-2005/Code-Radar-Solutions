#include<stdio.h>
#include<stdbool.h>

bool checkMonotonic(int arr[], int size)
{
    if(size == 1) return true;

    bool increasing = true, decreasing = true;

    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i+1]){
            increasing = false;
        }
        if(arr[i] < arr[i+1]){
            decreasing = false;
        }
    }
    return increasing || decreasing;
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