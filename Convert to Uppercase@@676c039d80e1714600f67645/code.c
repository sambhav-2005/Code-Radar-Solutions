#include<stdio.h>

void toUppercase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch);
    }
    else
    {
        char temp;
        temp = ch - ('a' - 'A');
        printf("%c", temp);
    }
}

int main(void)
{
    char str[20];
    fgets(str, sizeof(str), stdin);

    int length = sizeof(str);
    for(int i = 0; i < length; i++)
    {
        toUppercase(str[i]);
    }

    printf("%s", str);

    return 0;
}