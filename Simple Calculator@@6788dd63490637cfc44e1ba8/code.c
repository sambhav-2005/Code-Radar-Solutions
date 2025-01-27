#include <stdio.h>

int main(void)
{
    int a, b;
    char opr;
    scanf("%d %d %c", &a, &b, &opr);
    if (opr == "+")
    {
        printf("%d", a + b);
    }
    else if (opr == "-")
    {
        printf("%d", a - b);
    }
    else if (opr == "*")
    {
        printf("%d", a * b);
    }
    else if (opr == "/")
    {
        printf("%d", a / b);
    }
    else
    {
        printf("error");
    }
}