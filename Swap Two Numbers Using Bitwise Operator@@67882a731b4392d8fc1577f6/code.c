#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int temp;
    temp = a;
    b = a;
    b = temp;
    printf("%d %d", a, b);

}