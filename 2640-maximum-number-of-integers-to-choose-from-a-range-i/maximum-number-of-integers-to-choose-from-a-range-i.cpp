class Solution {
public:
    int valid(set<int>&nums,int m,int maxSum)
    {
        int sum=0;
        int c=0;
        for(auto i : nums)
        {
            if(i<=m)
            {
                sum+=i;
                c++;
            }
        }
        int k=(m*(m+1))/2;
        if(k-sum<=maxSum) return m-c;
        return -1;
    }
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int l=1,h=n,ans=0;
        set<int>b(banned.begin(),banned.end());
        while(l<=h)
        {
            int m=(l+h)/2;
            int value;
            if(m==1&&binary_search(banned.begin(),banned.end(),1)) value=0;
            else value=valid(b,m,maxSum);
            if(value!=-1)
            {
                ans=value;
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        // ans=max(ans,h);
        return ans;
    }
};