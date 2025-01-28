#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for (int i = 0; i < height; i++)
    {
        for (int j = height; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}