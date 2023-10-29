class Solution:
    def convertToBase7(self, num: int) -> str:
        if num==0: return "0"
        n=abs(num)
        s=""
        while n>0:
            s+=str(n%7)
            n=n//7
        return s[::-1] if num>0 else "-"+s[::-1]
