#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int i = 1;
    int spaces = n - i;
    while(spaces)
    {
        printf("*\n");
    }

}