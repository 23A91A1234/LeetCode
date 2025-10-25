class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int c=1,j=c,i=1;
        while(i<=n)
        {
            if(i%7==0)
            {
                sum+=j;
                c+=1;
                j=c;
            }
            else
            {
                sum+=j;
                j++;
            }
            i++;
        }
        return sum;
    }
};