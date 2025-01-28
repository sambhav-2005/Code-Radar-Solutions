#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for (int i = 1; i <= height; i++)
    {
        if (i == 1 || i == height)
        {
            for (int j = 1; j <= height; j++)
            {
                printf("*");
            }
        }
        else
        {
            if (j == 1 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}