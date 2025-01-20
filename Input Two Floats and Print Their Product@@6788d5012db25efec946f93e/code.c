#include <stdio.h>

int main(void)
{
    float a;
    float b;

    scanf("%f", &a);
    scanf("%f", &b);

    float c;
    c = a * b;
    printf("Product: %.2f", c);
}