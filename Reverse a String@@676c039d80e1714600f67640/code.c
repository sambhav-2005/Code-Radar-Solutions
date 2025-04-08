#include<stdio.h>

int getLen(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != "\0"; i++)
    {
        count++;
    }
    return count;
}

void reverseStr(char str[])
{
    int n = getLen(str);
    int start = 0;
    int end = n - 1;

    while(start < end)
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

    reverseStr(str);

    printf("%s", str);

    return 0;
}