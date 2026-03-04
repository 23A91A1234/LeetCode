class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int j=0,res=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(i-j+1==k)
            {
                res=min(res,nums[i]-nums[j]);
                j++;
            }
        }
        return res;
    }
};