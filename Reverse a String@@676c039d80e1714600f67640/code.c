#include<stdio.h>

int getLen(char s[])
{
    int count = 0;
    for(int i = 0; str[i] != "\0"; i++)
    {
        count++;
    }
    return count;
}

void reverseStr(char str[], int n)
{
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
        char temp;
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

}

int main(void)
{
    char str[20];
    scanf("%s", &str);

    int length = getLen(str);

    reverseStr(str, length);

    printf("%s", str);

    return 0;
}