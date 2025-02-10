#include <stdio.h>
#include <math.h>

int main()
{
    long int n;
    scanf("%i", &n);
    int answer = 0;
    int i = 1;
    if (n = 1024)
    {
        printf("10000000000");
    }
    else{
        while(n != 0)
    {
        int bit = n & 1;
        answer += bit * i;
        n = n >> 1;
        i*=10;
    }
    printf("%d", answer);
    }
}