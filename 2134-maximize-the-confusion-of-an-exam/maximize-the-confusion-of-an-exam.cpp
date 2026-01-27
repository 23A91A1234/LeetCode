class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int t=0,f=0,i=0,j=0,res=INT_MIN;
        while(j<answerKey.size())
        {
            if(answerKey[j]=='T') t++;
            else f++;
            while(t>k&&f>k)
            {
                if(answerKey[i]=='T') t--;
                else f--;
                res=max(res,j-i);
                i++;
            }
            if(j==answerKey.size()-1) res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};