class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        arr=[]
        res=[]
        h='aeiou'
        c=0
        for i in range(0,len(words)):
            m=len(words[i])
            if(words[i][0] in h and words[i][m-1]in h):
                c+=1
            arr.append(c)
        for i in range(0,len(queries)):
            if(queries[i][0]==0):
                a=arr[queries[i][1]]
                res.append(a)
            else:
                res.append(arr[queries[i][1]]-arr[queries[i][0]-1])
        return res