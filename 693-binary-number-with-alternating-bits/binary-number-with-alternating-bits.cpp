class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev=n%2;
        n=n/2;
        while(n>0)
        {
            int pres=n%2;
            if(pres==prev) return false;
            prev=pres;
            n=n/2;
        }
        return true;
    }
};