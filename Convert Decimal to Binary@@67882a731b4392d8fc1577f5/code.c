#include <stdio.h>

void printBinary(int n)
{
    if (n > 1)
        printBinary(n >> 1);
    
    printf("%d", n & 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printBinary(n);
    return 0;
}
