#include<stdio.h>

int lengthStr(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(void)
{
    char str[20];

    int len = lengthStr(str);

    printf("%d", len);

    return 0;
}