#include <stdio.h>

void check_msb(int num)
{
    if (num & (1 << 31))
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}
int main(void){
    int num;
    scanf("%d", &num);
    check_msb(num);
    return 0;
}