#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int i = 1;
    int spaces = n - i;
    while(spaces)
    {
        printf(" ");
    }
    int j = 1;
    while(j <= n)
    {
        printf("%d", j);
        j++;
    }
    while(j == i)
    {
        printf("%d", j);
        j--;
    }
    printf("\n");
    i++;
}