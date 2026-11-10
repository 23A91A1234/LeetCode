class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=i+1;j<=n&&j<=3+i;j++)
            {
                int h=dp[i]+costs[j-1]+pow(j-i,2);
                dp[j]=min(dp[j],h);
            }
        }
        return dp[n];
    }
};