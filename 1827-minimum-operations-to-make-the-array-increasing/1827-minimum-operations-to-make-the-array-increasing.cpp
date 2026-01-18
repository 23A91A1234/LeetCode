class Solution {
public:
    int minOperations(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>=nums[i+1])
            {
                int h=abs(nums[i]-nums[i+1])+1;
                res+=h;
                nums[i+1]=h+nums[i+1];
            }
        }
        return res;
    }
};