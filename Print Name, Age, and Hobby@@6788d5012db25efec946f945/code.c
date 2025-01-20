#include <stdio.h>

int main(void)
{
    char str[50];
    int a;
    scanf("%s %d", str, a);
    char hobby[100];
    scanf("%s", hobby);
    printf("Name: %s\n, Age: %i\n, Hobby: %s\n", str, a, hobby);
}