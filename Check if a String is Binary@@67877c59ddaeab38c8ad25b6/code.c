#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool checkBinary(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
        {
            continue;
        }
        if(str[i] != '0' && str[i] != '1')
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    char str[20];
    fgets(str, sizeof(str), stdin);

    if(checkBinary(str))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}