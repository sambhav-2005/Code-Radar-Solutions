#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);
    int i = 0;
    for (i; i < rows; i++)
    {
        int j = 0;
        {
            for(j; j < i + 2; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}