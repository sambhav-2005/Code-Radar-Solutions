#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool checkPalindromic(char s[], int n)
{
    int start = 0;
    int end = n - 1;
    while(start <= end)
    {
        if(s[start] == ' ')
        {
            continue;
        }
        else if(s[start] != s[end])
        {
            return false;
            start++;
            end--;
        }
    }
    return true;
}

int main(void)
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if(checkPalindromic(str, len))
    {
        printf("Yes");
    }
    else{
        printf("No");
    }

}