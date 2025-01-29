#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

}