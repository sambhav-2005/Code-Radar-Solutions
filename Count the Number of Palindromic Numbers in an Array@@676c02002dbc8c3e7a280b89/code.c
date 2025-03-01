#include <stdio.h>
#include <stdbool.h>


bool checkPalindrome(int n)
{
    int original = n;
    int answer = 0;
    while(n != 0)
    {
        int digit = n % 10;
        answer = digit + (answer*10);
        n/=10;
    }
    return answer == original;

}

int countPalindromes(int arr[], int size)
{
    int count_of_palindromes = 0;
    for(int i = 0; i < size; i++)
    {
        if(checkPalindrome(arr[i]));
        {
            count_of_palindromes++;
        }
    }
    return count_of_palindromes;
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

    int count = countPalindromes(arr, size);
    printf("%d", count);

    return 0;
}