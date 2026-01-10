class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int i=a.size()-1,j=b.size()-1,c=0;
        while(i>=0&&j>=0)
        {
            int h=(a[i]-'0')+(b[j]-'0')+c;
            cout<<h<<" ";
            c=h/2;
            res+=to_string(h%2);
            i--;
            j--;
        }
        while(i>=0)
        {
            int h=(a[i]-'0')+c;
            c=h/2;
            res+=to_string(h%2);
            i--;
        }
         while(j>=0)
        {
            int h=(b[j]-'0')+c;
            c=h/2;
            res+=to_string(h%2);
            j--;
        }
        if(c!=0) res+=to_string(c);
        reverse(res.begin(),res.end());
        return res;
    }
};