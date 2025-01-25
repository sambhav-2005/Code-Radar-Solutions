#include <stdio.h>

int main(void)
{
    int i;
    scanf("%d", &i);
    if (i > 0)
    {
        printf("%s", "Positive");
    }
    else if (i < 0)
    {
        printf("%s", "Negative");
    }
    else
    {
        printf("%s", "Zero");
    }
}