#include<stdio.h>

int getLen(char s[])
{
    int n;
    for(int i = 0; s[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}

int countWords(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    int count = 0;
    for(int i = 0; i <= e; i++)
    {
        if(str[i] = " ")
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char str[50];
    scanf("%s", &str);

    int length = getLen(str);

    int c = countWords(str, length);
    printf("%d", c);

    return 0;
}