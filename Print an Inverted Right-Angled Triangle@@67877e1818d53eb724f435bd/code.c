#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for (int i = 0; i < height; i++)
    {
        for (int j = height; j < i - 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}