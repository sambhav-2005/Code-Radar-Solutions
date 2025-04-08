#include<stdio.h>

int getLen(char s[])
{
    int count = 0;
    for(int i = 0; s[i] != "\0"; i++)
    {
        count++;
    }
    return count;
}

void reverseStr(char s[], int n)
{
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
        char temp[];
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
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