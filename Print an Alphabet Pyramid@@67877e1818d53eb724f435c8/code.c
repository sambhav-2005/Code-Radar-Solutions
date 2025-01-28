#include <stdio.h>

int main()
{
    int rows;
    char c = 'A';
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {c = 'A';
        for (int j = 1; j < i + 1; j++)
        {
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
}