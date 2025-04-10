#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[20];
    scanf("%s", &str);

    char ch;
    scanf(" %c", &ch);

    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = ch;
        }
    }

    printf("%s", str);

    return 0;
}