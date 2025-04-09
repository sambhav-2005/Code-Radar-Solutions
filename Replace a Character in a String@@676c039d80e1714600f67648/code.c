#include <stdio.h>
#include <string.h>

void replaceChar(char s[], int n, char ch, char nh)
{
    for(int i = 0; i < n; i++)
    {
        if(s[i] == ch)
        {
            s[i] = nh;
        }
    }
    printf("%s", s);
}

int main(void)
{
    char str[50];
    fgets(str, sizeof(str), stdin);

    char ch, nh;
    scanf("%c", &ch);
    scanf("%c", &nh);

    int len = strlen(str);

    replaceChar(str, len, ch, nh);

    return 0;
}