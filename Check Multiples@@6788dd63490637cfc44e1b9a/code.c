#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0)
    {
        print("Yes");
    }
    else
    {
        print("No");
    }
}