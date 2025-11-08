class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int h=n*n,s=n*(n+1);
        int a=h>s?s:h;
        for(int i=a;i>0;i--)
        {
            if(h%i==0&&s%i==0)
            {
                return i;
            }
        }
        return 0;
    }
};