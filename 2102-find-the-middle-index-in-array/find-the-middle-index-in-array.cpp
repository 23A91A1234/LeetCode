class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>prefix(nums.size(),0);
        if(nums.size()==1) return 0;
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        if(nums[0]-prefix[nums.size()-1]==0) return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(prefix[i-1]==prefix[nums.size()-1]-prefix[i]) return i;
        }
        return -1;
    }
};