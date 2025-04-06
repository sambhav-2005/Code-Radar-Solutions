#include<stdio.h>
#include<stdbool.h>

int majorElement(int arr[], int size)
{
    int visited[size];
    for(int i = 0 ; i < size; i++)
    {
        visited[i] = 0;
    }

    for(int i = 0; i < size; i++)
    {
        if(visited[i] == 1)
        {
            continue;
        }

        int count = 1;

        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        if(count > size / 2);
        return arr[i];
    }

    return -1;
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

    int majority = majorElement(arr, size);

    printf("%d", majority);

    return 0;
}