class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0,x=nums[nums.size()-1];
        while(k--)
        {
            sum+=x;
            x=x+1;
        }
        return sum;
    }
};