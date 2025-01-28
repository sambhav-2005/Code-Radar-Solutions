#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for (int i = 1; i <= height; i++)
    {
       for (int j = 1; j <= height; j ++)
       {
        if (i == 1 || i == height)
        {
            printf("*");
        }
        else
        {
            if (j == 1 || j == height)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
       }
       printf("\n");
    }
}