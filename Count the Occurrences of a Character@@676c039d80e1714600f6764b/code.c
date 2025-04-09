#include <stdio.h>
#include <string.h>

int countOccurence(char s[], int n, char ch)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == ch)
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char str[20];
    scanf("%s", &str);

    char ch;
    scanf("%c", &ch);

    int length = strlen(str);

    int n = countOccurence(str, length, ch);

    printf("%d", n);

    return 0;
}