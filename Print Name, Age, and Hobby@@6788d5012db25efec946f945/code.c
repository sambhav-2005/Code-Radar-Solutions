#include <stdio.h>

int main(void)
{
    char str1[50];
    int age;
    scanf("%s %d", &str1,&age);
    char str2[50];
    scanf("%s", &str2);
    printf("Name: %s\n", str1);
    printf("Age: %d\n", age);
    printf("Hobby: %s", str2);
}