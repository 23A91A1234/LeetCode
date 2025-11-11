class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        res=[]
        lst1=[]
        lst2=[]
        for i in range(0,len(nums1)):
            if(nums1[i] not in nums2):
                lst1.append(nums1[i])
        for i in range(0,len(nums2)):
            if(nums2[i] not in nums1):
                lst2.append(nums2[i])
        lst1=list(set(lst1))
        lst2=list(set(lst2))
        res.append(lst1)
        res.append(lst2)
        return res