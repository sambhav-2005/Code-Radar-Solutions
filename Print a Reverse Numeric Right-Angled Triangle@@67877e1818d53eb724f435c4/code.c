#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for(int i = 1; i <= height ; i++)
    {
        int height = 1;
        for (int j = 1; j <= height; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}