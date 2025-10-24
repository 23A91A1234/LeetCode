class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            stack<int>st;
            while(nums[i]>0)
            {
                st.push(nums[i]%10);
                nums[i]=nums[i]/10;
            }
            while(!st.empty())
            {
                res.push_back(st.top());
                st.pop();
            }
        }
        return res;
    }
};