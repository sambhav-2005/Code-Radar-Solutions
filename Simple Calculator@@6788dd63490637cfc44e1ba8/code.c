#include <stdio.h>

int main()
{
    int a, b;
    char opr;
    scanf("%d %d %c", &a, &b, &opr);
    if (opr == '+')
    {
        printf("%d", a+b);
    }
    else if (opr == '-')
    {
        printf("%d", a-b);
    }
    else if (opr == '*')
    {
        printf("%d", a*b);
    }
    else if (opr == '/')
    {
        if (b == 0)
        {
            printf("error");
        }
        else{
            printf("%d", a/b);
        }
    }
    else
    {
        printf("error");
    }
}