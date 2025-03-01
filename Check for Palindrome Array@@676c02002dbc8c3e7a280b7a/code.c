#include <stdio.h>
#include<stdbool.h>


bool check_palindromic(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start < end)
    {
        if(arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
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
    if(check_palindromic(arr, size))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}