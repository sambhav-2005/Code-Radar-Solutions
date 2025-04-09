#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool checkBinary(char str[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(str[i] == '0' || str[i] == '1')
        {
            return true;
        }
    }
    return false;
}

int main(void)
{
    char str[20];
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);

    if(checkBinary(str, length))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}