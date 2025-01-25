#include <stdio.h>
int main(void)
{
    char c;
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
    {
        printf("%s", "Uppercase");
    }
    else if (c >= 'a' && c<= 'z')
    {
        printf("%s", "Lowercase");
    }
}