#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for (int i = 1; i <= height; i++)
    {
        if (i == 1)
        {
            printf("*");
        }
        else
        {
            for (int j = 1; j < i + 2; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}