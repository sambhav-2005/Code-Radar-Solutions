#include<stdio.h>
#include<string.h>

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
    char str[50];
    fgets(str, sizeof(str), stdin);

    int len = lengthStr(str);

    printf("%d", len);

    return 0;
}