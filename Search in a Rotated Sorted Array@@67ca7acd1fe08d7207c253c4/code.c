int searchInRotatedArray(int arr, int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
}