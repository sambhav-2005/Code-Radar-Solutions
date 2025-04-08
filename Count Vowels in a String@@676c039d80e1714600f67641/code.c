#include<stdio.h>

int getLen(char s[])
{
    int count;
    for(int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void toLowercase(char ch)
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

int countVowels(char str[])
{
    int length = getLen(str);
    int s = 0;
    int e = length - 1;
    int n = 0;
    for(int i = s; i <= e; i++)
    {
        if(toLowercase(str[i]) == 'a' || toLowercase(str[i]) == 'e' || toLowercase(str[i]) == 'i' || toLowercase(str[i]) == 'o' ||toLowercase(str[i]) == 'u')
        {
            n++;
        }
    }
    return n;
}

int main(void)
{
    char str[20];
    scanf("%s", &str);

    int count = countVowels(str);

    printf("%d",count);

    return 0;
}