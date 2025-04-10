#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];
    fgets(str, sizeof(str), stdin);

    char ch, nh;
    scanf("%c", &ch);
    scanf("%c", &nh);

    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] == ch)
        {
            str[i] = nh;
        }
    }

    printf("%s", str);

    return 0;
}