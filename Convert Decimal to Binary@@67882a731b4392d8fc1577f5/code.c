#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    int answer = 0;
    while(n != 0)
    {
        int bit = n & 1;
        answer = (bit * pow(10, i)) + answer;
        n = n >> 1;
        i++;
    }
    printf("%d", answer);
}