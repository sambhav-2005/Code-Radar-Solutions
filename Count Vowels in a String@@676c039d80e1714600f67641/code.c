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

int countVowels(char str[])
{
    int length = getLen(str);
    int s = 0;
    int e = length - 1;
    int n = 0;
    for(int i = s; i <= e; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
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