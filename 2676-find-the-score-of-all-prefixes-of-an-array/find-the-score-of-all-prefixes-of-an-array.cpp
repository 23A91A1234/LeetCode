class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>res(nums.size(),0);
        res[0]=nums[0]*2;
        int max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(max<nums[i] )max=nums[i];
            cout<<max<<" ";
            res[i]=nums[i]+max+res[i-1];
        }
        return res;
    }
};