#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 400 == 0)
        {
            if (year % 100 != 0)
            {
                printf("%s", "Leap Year");
            }
        }
    }
}