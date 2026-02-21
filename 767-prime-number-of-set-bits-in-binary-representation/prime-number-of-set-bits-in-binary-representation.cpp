class Solution {
public:
    bool prime(int n)
    {
        if(n==1) return false;
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0) c++;
        }
        if(c==0) return true;
        return false;
    }
    int countPrimeSetBits(int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++)
        {
            int h=__builtin_popcount(i);
            if(prime(h)) c++;
        }
        return c;
    }
};