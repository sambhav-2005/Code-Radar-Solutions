#include <stdbool.h>

bool checkPrime(int n)
{
    if(n < 2)
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

void printPrimesInRange(int a, int b)
{
    for(int i = a; i <= b; i++)
    {
        if(checkPrime(i))
        {
            printf("%d ",i);
        }
        else if(checkPrime(i) == 0)
        {
            printf("No prime numbers");
        }
    }

}