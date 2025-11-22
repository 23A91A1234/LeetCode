class Solution {
public:
    int numberOfChild(int n, int k) {
        int h=0,f=0;
        while((h>=0&&h<n)&&k>0)
        {
            if(h==n-1) f=1;
            if(h==0) f=0;
            if(f==1) h--;
            if(f==0) h++;
            k--;
        }
        return h;
    }
};