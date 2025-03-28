void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void turninArray(int N)
{
    int arr[100];
    int size_arr = 0;

    while(N > 0)
    {
        int digit = N % 10;
        arr[size_arr] = digit;
        size_arr++;
        N / = 10;
    }

    int start = 0;
    int end = size_arr - 1;
    while(start <= end)
    {
        swap(arr[start], arr[end])
        start++;
        end--;
    }
}
