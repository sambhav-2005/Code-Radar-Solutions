#include <stdio.h>

int main(void)
{
    int i;
    scanf("%d", &i);
    if (i > 0 && i < 101)
    {
        printf("In Range");
    }
    else
    {
        printf("Out of Range");
    }
}