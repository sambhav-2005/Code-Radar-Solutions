#include <stdio.h>

int main(void)
{
    int i;
    scanf("%d", &i);
    if (i > 0)
    {
        printf("%c", Positive);
    }
    else if (i < 0)
    {
        printf("%c", Negative);
    }
    else
    {
        printf("%c", Zero);
    }
}