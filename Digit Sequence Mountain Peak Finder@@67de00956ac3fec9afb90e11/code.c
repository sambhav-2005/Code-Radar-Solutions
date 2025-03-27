void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int mountainPeak(int N)
{
    int arr[100];
    int size_arr;
    while(N > 0)
    {
        int digit = N % 10;
        arr[size_arr] = digit;
        size_arr++;
        N /= 10;
    }
    int start = 0;
    int end = size_arr - 1;

    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    int mid = (start + end) / 2;
    
    while(start  < end)
    {
        if(arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return arr[start];
}