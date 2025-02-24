#include <stdio.h>

int checkEven(int arr[], int size)
{
    int count_of_even = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count_of_even++;
        }
    }
    return count_of_even;
}

int checkOdd(int arr[], int size)
{
    int count_of_odd = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            count_of_odd++;
        }
    }
    return count_of_odd;
}


int main(void)
{
    int arr[100];
    int size;

    scanf("%d", &size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int evens = checkEven(arr, size);
    int odds = checkOdd(arr, size);

    printf("%d %d", evens, odds);
}