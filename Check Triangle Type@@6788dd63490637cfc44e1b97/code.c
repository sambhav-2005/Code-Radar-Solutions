#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a = b = c)
    {
        printf("Equilateral");
    }
    else if ((a = b && b != c) || (b = c && c != a) || (a = c && c != b))
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }
}