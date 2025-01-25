#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int temp1, temp2;
    temp1 = *a;
    *b = temp2;
    printf("%d %d", temp2, temp1);
}