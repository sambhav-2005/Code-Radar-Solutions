#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    float s = a + b + c;
    float d = s/3;

    printf("Average: %.2f", d);
}

