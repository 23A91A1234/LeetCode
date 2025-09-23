class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        lst1=version1.split('.')
        lst2=version2.split('.')
        h=min(len(lst1),len(lst2))
        f=0
        for i in range(0,h):
            if(int(lst1[i])<int(lst2[i])): f=-1
            elif(int(lst1[i])>int(lst2[i])): f=1
            if(f!=0): return f
        if(len(lst1)>h):
            for i in range(h,len(lst1)):
                if(int(lst1[i])<0): f=-1
                elif(int(lst1[i])>0): f=1
                if(f!=0): return f
        else:
            for i in range(h,len(lst2)):
                if(int(lst2[i])<0): f=1
                elif(int(lst2[i])>0): f=-1
                if(f!=0): return f
        return f