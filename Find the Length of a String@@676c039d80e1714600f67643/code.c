#include<stdio.h>

int getLen(char s[])
{
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(void)
{
    char str[20];

    int len = getLen(str);

    printf("%d", len);

    return 0;
}