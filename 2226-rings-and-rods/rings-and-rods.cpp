class Solution {
public:
    int countPoints(string rings) {
        map<int,string>map;
        for(int i=0;i<rings.size();i+=2)
        {
            if(!(find(map[rings[i+1]].begin(),map[rings[i+1]].end(),rings[i])!=map[rings[i+1]].end()))
            {
                map[rings[i+1]]+=rings[i];
            }
        }
        int c=0;
        for(auto& [key,value] :map)
        {
            cout<<key<<" "<<value;
            if(value.size()==3) c++;
        }
        return c;
    }
};