#include<stdio.h>
#include<string.h>

int getLen(char s[])
{
    int n = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}

int countWords(char str[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int length = getLen(str);
    int c = countWords(str, length);
    
    printf("%d\n", c+1);

    return 0;
}