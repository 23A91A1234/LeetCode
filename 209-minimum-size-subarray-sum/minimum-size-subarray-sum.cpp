class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,size=INT_MAX;
        int i=0,j=0;
        while(j<nums.size())
        {
            sum+=nums[j];
        while(sum>=target)
            {
                size=min(size,j-i+1);
                sum-=nums[i];
                i++;
                // sum=0;
            }
            j++;
        }
        if(size==INT_MAX) return 0;
        return size;
    }
};