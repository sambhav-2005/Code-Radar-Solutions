#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < 18 && b == 0)
    {
        printf("Not Eligible");
    }
    else
    {
        printf("Eligible");
    }
}