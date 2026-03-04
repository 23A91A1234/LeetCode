class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=0,p=0;
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]>0)
            {
                p++;
            }
            if(nums[i]<0)
            {
                n++;
            }
        }
        return (p>n)?p:n;
    }
};