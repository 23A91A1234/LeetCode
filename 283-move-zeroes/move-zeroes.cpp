class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>arr(nums.size(),0);
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                arr[j++]=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=arr[i];
        }
    }
};