#include <stdio.h>

int calcSum(int n)
{
    int sum = 0;
    while(n != 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n/=10;
    }
    return sum;
}
void iterate(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int sum_of_each_digit = calcSum(arr[i]);

        printf("%d ", sum_of_each_digit);
    }

}
int main(void)
{
    int arr1[100];
    int size;
    
    scanf("%d", &size);
    for(int j = 0; j < size; j++)
    {
        scanf("%d", &arr1[j]);

    }
    iterate(arr1, size);

    return 0;
}