#include<stdio.h>
#include<string.h>

char toLowercase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp;
        temp = ch - 'A' + 'a';
        return temp;
    }
}

int main(void)
{
    char str[20];
    scanf("%s", &str);

    char ch;
    scanf(" %c", &ch);

    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        char c = toLowercase(str[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            str[i] = ch;
        }
    }

    printf("%s", str);

    return 0;
}