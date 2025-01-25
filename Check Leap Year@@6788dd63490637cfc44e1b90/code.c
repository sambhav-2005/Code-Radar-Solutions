#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);
    if (year % 4 == 0 && year % 400 == 0)
    {
        printf("%s", "Leap Year");
    }
    else
    {
        printf("%s", "Not a Leap Year");
    }
}