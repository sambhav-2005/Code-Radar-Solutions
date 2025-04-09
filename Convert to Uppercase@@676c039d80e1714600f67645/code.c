#include<stdio.h>
#include<string.h>

char toUppercase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch - ('a' - 'A');
    }
    return ch;
}

int main(void)
{
    char str[20];
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    for(int i = 0; i < length; i++)
    {
        printf("%c", toUppercase(str[i])); 
    }

    return 0;
}