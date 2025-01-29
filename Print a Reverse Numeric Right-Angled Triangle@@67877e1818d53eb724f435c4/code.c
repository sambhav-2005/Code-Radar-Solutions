#include <stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for(int i = height; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
            return 1;
        }
        printf("\n");
    }
}