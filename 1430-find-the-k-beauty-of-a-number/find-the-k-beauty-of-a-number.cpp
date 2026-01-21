class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string n=to_string(num);
        int c=0;
        for(int i=0;i<n.size();i++)
        {
            for(int j=i;j<n.size();j++)
            {
                if(j-i+1==k)
                {
                    string res="";
                    for(int k=i;k<=j;k++)
                    {
                        res+=n[k];
                    }
                    cout<<res<<" ";
                    if(stoi(res)!=0&&num%stoi(res)==0) c++;
                }
            }
        }
        return c;
    }
};