#include <stdio.h>

int main(void){
    int mark;
    scanf("%d", &mark);

    if (mark >= 90)
    {
        printf("A");
    }
    else if (mark < 90 && mark >= 80)
    {
        printf("B");
    }
    else if (mark < 80 && mark >= 70)
    {
        printf("C");
    }
    else if (mark < 70 && mark >= 60)
    {
        printf("D");
    }
    else{
        printf("F");
    }