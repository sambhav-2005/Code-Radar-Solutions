#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for(int i = height; i >= 0 ; i--)
    {
        for (int j = 1; j <= height + 1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}