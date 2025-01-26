#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b*b == a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}