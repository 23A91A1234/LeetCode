class Solution {
public:
    vector<int> update(vector<int>&arr)
    {
        vector<int>ans;
        ans.push_back(1);
        for(int i=0;i<arr.size()-1;i++)
        {
            ans.push_back(arr[i]+arr[i+1]);
        }
        ans.push_back(1);
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        if(numRows==1)
        {
            res.push_back({1});
            return res;
        }
        else if(numRows==2)
        {
            res.push_back({1});
            res.push_back({1,1});
            return res;
        }
        else
        {
            res.push_back({1});
            res.push_back({1,1});
            vector<int>nums={1,2,1};
            res.push_back(nums);
            int c=3;
            while(c<numRows)
            {
                nums=update(nums);
                res.push_back(nums);
                c++;
            }
        }
        return res;
    }
};