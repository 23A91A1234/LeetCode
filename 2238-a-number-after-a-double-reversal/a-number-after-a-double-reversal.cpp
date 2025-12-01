class Solution {
public:
    int reverse(int n)
    {
        int rev=0;
        while(n>0)
        {
            if(rev==0&&n%10==0)
            {
                rev=0;
            }
            else
            {
                rev=rev*10+n%10;
            }
            n=n/10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int rev1=reverse(num);
        cout<<rev1;
        int rev2=reverse(rev1);
        if(rev2==num) return true;
        return false;
    }
};