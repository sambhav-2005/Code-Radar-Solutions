#include<stdio.h>

int countWords(char str[])
{
    int s = 0;
    int e = n -1;
    int count;
    for(int i = 0; str[i] = e; i++)
    {
        if(str[i] = " ")
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char str[50];
    scanf("%s", &str);

    int c = countWords(str);

    printf("%d", c);

    return 0;
}