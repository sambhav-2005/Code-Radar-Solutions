#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int temp;
    temp = a;
    b = a;
    temp = b;
    printf("%d %d", a, b);

}