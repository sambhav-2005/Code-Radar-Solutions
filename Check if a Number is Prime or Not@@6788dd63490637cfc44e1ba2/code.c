#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a <= 1)
    {
        printf("Not Prime");
    }
    else{
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                printf("Not Prime");
            }
            else
            {
                printf("Prime");
            }
        }
    }
}