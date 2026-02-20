class Solution {
public:
  bool valid(vector<int>&nums,int m)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=m) sum++;
        }
        if(sum>=m) return true;
        return false;
    }
    int hIndex(vector<int>& citations) {
        int ans=0,l=0,h=*max_element(citations.begin(),citations.end());
        while(l<=h)
        {
            int m=(l+h)/2;
            if(valid(citations,m))
            {
                ans=m;
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return ans;
    }
};