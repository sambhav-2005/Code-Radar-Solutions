int mountainPeak(int N)
{
    int arr[100];
    int size_arr = 0;
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
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
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