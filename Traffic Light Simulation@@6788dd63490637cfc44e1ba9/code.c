#include <stdio.h>

int main(void)
{
    char color;
    scanf("%c", &color);
    if (color == 'R')
    {
        printf("Stop");
    }
    else if (color == 'G')
    {
        printf("Go");
    }
    else if (color == 'Y')
    {
        printf("Slow Down");
    }
}