#include <stdio.h>
#include <stdbool.h>

bool prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if(n == 2)
    {
        return true;
    }
    else
    {
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                return false;
                break;
            }
        }
        return true;
    }
}
int checkPrime(int arr[], int size)
{
    int count_of_primes = 0;
    for(int i = 0; i < size; i++)
    {
        if (prime(i))
        {
            count_of_primes++;
        }
    }
    return count_of_primes;
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

    printf("%d", checkPrime(arr, size));

}