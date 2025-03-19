int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int midIndex = start + (end - start)/2;

    while(start <= end)
    {
        if(target == arr[midIndex])
        {
            return midIndex;
        }
        else if(target > arr[midIndex])
        {
            start = midIndex + 1;
        }
        else
        {
            end = midIndex - 1;
        }
        midIndex = start + (end - start)/2;
    }
    return -1;
}