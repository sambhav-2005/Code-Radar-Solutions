#include <stdio.h>

int main(void)
{
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
    }
}