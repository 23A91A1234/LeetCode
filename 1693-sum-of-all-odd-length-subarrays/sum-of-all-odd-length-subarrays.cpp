class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if((j-i)%2==0)
                {
                    for(int k=i;k<=j;k++)
                    {
                        // cout<<arr[k]<<" ";
                        sum+=arr[k];
                    }
                    // cout<<endl;
                }
            }
        }
        return sum;
    }
};