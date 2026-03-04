int peakIndexInMountainArray(int* arr, int arrSize) {
    for(int i=0;i<arrSize-1;i++)
    {
        if(arr[i]>arr[i+1]&& arr[i-1]<arr[i])
        {
            return i;
        }
    }
    return 0;
}