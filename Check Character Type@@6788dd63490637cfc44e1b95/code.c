#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    scanf("%c", &ch);

    if (isalpha(ch))
    {
        ch = tolower(ch);
        {
            if(ch == "a" || ch == "e" || ch == "i" || ch == "o" || ch == "u")
            {
                printf("%s", "Vowel\n");
            }
            else
            {
                printf("%s", "Consonant\n");
            }
        }
    }
    else if (isdigit(ch))
    {
        printf("%s", "Digit\n");
    }
    else
    {
        printf("%s", "Special Character\n");
    }

}