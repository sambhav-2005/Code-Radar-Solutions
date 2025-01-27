#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < 11; i++)
    {
        printf("n X %d = %d", i, n*i);
    }
}