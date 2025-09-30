class Solution {
public:
    vector<int> update(vector<int>&nums)
    {
        vector<int>arr;
        for(int i=0;i<nums.size()-1;i++)
        {
            arr.push_back((nums[i]+nums[i+1])%10);
        }
        return arr;
    }
    int triangularSum(vector<int>& nums) {
        while(true){
        if(nums.size()==1)
        {
            return nums[0];
        }
        else
        {
            nums=update(nums);
        }
        }
        return 0;
    }
};