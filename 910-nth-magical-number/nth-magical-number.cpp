class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long mod=1e9+7;
        long long l=min(a,b),h=1ll*n*min(a,b);
        long long ans=0;
        while(l<=h)
        {
            long long m=(l+h)/2;
            int ca=m/a;
            int cb=m/b;
            int lcm=(a*b)/__gcd(a,b);
            int q=m/lcm;
            int count=(ca+cb-q);
            if((m%a==0||m%b==0)&&count==n) return m%mod;
            else if(n<=count)
            {
                ans=m;
                h=m-1;
            }
            else l=m+1;
        }
        return ans;
    }
};