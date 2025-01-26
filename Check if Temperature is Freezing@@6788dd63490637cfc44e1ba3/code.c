#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a < 1)
    {
        printf("Freezing");
    }
    else
    {
        printf("Above Freezing");
    }
}