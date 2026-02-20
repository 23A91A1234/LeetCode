class Solution {
public:
    bool valid(vector<int>&nums,int t,int m)
    {
        int sum=0;
        if(m==0&&t==0) return true;
        if(m==0) return false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%m==0) sum+=nums[i]/m;
            else sum+=(nums[i]/m)+1;
        }
        if(sum>t) return false;
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=0,h=*max_element(nums.begin(),nums.end());
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(valid(nums,threshold,mid))
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
    }
};