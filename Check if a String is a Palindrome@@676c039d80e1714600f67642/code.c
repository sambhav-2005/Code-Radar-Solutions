#include<stdio.h>
#include<stdbool.h>

bool isPalindromic(char s[])
{
    
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