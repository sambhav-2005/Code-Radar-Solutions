#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[100];

    int visited[100] = {0};

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);

        if(visited[i] == 1);
        continue;

        int counter = 1;
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                counter++;
                visited[j] = 1;
            }
        }
        printf("%d %d\n", arr[i], counter);
    }

    return 0;
}