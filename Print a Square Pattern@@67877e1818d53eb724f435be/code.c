#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}