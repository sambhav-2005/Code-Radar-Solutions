#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for(int i = 1; i <= height ; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}