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
}
void iterate(int arr[], int size)
{
    for(int = 0; i < size; i++)
    {
        int sum_of_each_digit = calcSum(arr[i]);

        cout << sum_of_each_digit << " ";
    }

}
int main(void)
{
    int arr1[100];
    int size;
    
    scanf("%d", &size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);

    }
    iterate(arr1, size);

    return 0;
}