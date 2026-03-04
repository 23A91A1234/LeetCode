class Solution {
    public int pivotInteger(int n) {
        int[]arr=new int[n];
        arr[0]=1;
        if(n==1)
        {
            return 1;
        }
        for(int i=1;i<n;i++)
        {
            arr[i]=i+1+arr[i-1];
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        for(int i=1;i<n;i++)
        {
            if(arr[n-1]==0)
            {
                return 0;
            }
            else
            {
                if(arr[i]==arr[n-1]-arr[i-1])
                {
                    return i+1;
                }
            }
        }
        return -1;
    }
}