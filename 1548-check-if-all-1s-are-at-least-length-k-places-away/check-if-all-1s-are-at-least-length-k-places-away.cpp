class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int h=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1&&h==-1)
            {
                h=i;
            }
            else if(nums[i]==1)
            {
                if(i-h-1<k) return false;
                h=i;
            }
        }
        return true;
    }
};