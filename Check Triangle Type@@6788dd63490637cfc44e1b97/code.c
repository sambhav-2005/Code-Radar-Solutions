#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a = b) && (a = c) && (b = c))
    {
        printf("Equilateral");
    }
    else if ((a = b && b != c) || (a = c && c != b) || (b = c && c != a))
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }
}