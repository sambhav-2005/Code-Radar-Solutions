#include<stdio.h>

char toUppercase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else
    {
        char temp;
        temp = ch - 'a' + 'A';
        return temp;
    }
}

int main(void)
{
    char str[20];
    fgets(str, sizeof(str), stdin);

    int length = sizeof(str);
    for(int i = 0; i < length; i++)
    {
        char c = toUppercase(str[i]);
    }

    printf("%s", str);

    return 0;
}