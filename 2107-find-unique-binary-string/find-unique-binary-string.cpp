class Solution {
public:
    string generate(string res,map<string,int>&map,int n)
    {

        if(n==res.size())
        {
            map[res]++;
            if(map[res]==1) return res;
            return "";
        }
        string left = generate(res+'0', map, n);
        if(left!="") return left;

        string right = generate(res+'1', map, n);
        if(right!="") return right;
        return "";
    }
    string findDifferentBinaryString(vector<string>& nums) {
        map<string,int>map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        string res="";
        return generate(res,map,nums.size());
        // for(auto i : map)
        // {
        //     if(i.second==1) return i.first;
        // }
        // return "";
    }
};