#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);

    int res = a << b;
    
    printf("%d", res);
}