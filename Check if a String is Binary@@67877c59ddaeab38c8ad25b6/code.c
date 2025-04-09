#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool checkBinary(char str[], int n)
{
    bool isbinary = true;
    for(int i = 0; i < n; i++)
    {
        if(str[i] == '0' || str[i] == '1')
        {
            continue;
        }
        else
        {
            isbinary = false;
        }
    }
    return isbinary;
}

int main(void)
{
    char str[20];
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    if(length == 0)
    {
        printf("No");
    }

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