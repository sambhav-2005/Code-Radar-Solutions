#include <stdio.h>

int main(void)
{
    char ch;
    int height;
    scanf("%d", &height);
    for (int i = height; i > 0; i--)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}