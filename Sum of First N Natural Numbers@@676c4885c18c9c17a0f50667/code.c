#include <stdio.h>

int main(void)
{
    int end;
    scanf("%d", &end);
    int sum;
    for (int i = 0; i < end + 1; i++)
    {
        sum += i;
    }
    printf("%d", sum);
}