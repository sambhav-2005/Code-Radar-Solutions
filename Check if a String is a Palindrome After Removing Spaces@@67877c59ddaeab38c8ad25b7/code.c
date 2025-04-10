#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool checkPalindromic(char s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = n; j > 0; j--)
        {
            if(s[i] != s[j])
            {
                return false;
            }
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