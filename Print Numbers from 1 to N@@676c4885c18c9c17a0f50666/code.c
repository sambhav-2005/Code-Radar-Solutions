#include <stdio.h>

int main(void)
{
    int end;
    scanf("%d", &end);
    for (int i = 1; i <= end; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}