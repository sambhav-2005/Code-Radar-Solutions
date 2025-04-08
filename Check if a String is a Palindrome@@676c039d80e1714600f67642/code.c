#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindromic(char s[])
{
    int length = strlen(s);
    int st = 0;
    int e = length - 1;

    if(s[st] != s[e])
    {
        return false;
    }
    else{
        st++;
        e--;
    }
    return true;
}

int main(void)
{
    char str[20];
    scanf("%s", &str);

    if(isPalindromic(str))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}