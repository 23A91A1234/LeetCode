class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res=nums;
        ans.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            ans.push_back(nums);
        }
        while(prev_permutation(res.begin(),res.end()))
        {
            ans.push_back(res);
        }
        return ans;
    }
};