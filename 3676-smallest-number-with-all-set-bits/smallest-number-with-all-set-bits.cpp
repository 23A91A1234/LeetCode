class Solution {
public:
    int smallestNumber(int n) {
        int h=n;
        while(true)
        {
            int f=0,h=n;
            while(h>0)
            {
                if(h%2==0)
                {
                    f=1;
                    break;
                }
                h=h/2;
            }
            if(f==0)
            {
                return n;
            }
            n++;
        }
        return 0;
    }
};