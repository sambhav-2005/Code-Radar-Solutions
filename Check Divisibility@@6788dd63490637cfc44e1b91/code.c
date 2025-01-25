#include <stdio.h>

int main(void)
{
    int i;
    scanf("%d", &i);
    if (i % 11 == 0 && i % 5 == 0)
    {
        printf("%s", "Divisible");
    }
    else{
        printf("%s", "Not Divisible");
    }
}