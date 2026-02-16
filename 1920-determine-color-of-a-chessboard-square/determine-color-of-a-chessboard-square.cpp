class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int h=(int)coordinates[0]-'a';
        h=h+1;
        int q=(int)coordinates[1]-'0';
        // cout<<h<<" "<<q;
        if(h%2==0&&q%2==0) return false;
        else if(h%2!=0&&q%2!=0) return false;
        return true;
    }
};