#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("Equal");
    }
    else if (a > b)
    {
        printf("First");
    }
    else
    {
        printf("Second");
    }
}