#include<stdio.h>

void toUppercase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - ('a' - 'A');
        printf("%c", ch);
    }
}

int main(void)
{
    char str[20];
    fgets(str, sizeof(str), stdin);

    int length = sizeof(str);
    for(int i = 0; i < length - 1; i++)
    {
        toUppercase(str[i]);
    }


    return 0;
}