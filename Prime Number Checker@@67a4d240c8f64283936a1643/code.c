#include <stdio.h>

int checkprime(int n)
{
    int n;
    scanf("%d", &n);
    if(n < 2)
    {
        return 0;
    }
    else
    {
        int i = 2;
        while(i < n)
        {
            if(n % i == 0)
            {
                return 0;
                break;
                i++;
            }
            else
            {
                return 1;
            }
        }
    }

}