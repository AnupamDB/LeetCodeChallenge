class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        v=[]
        for i in nums:
            if(i%2==0):
                v.append(i)
        for i in nums:
            if(i%2!=0):
                v.append(i)
        return v
