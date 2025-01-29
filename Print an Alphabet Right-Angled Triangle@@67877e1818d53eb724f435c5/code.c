#include <stdio.h>

int main(void)
{
    char ch;
    int height;
    scanf("%d", &height);
    for (int i = 1; i <= height; i++)
    {
        char ch = 'A';
        for (int j = 1; j < i + 1; j++)
        {
            printf("%c", ch);
            ch++;
        }
    }
}