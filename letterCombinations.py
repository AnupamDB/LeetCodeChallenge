class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        d={'2':'abc','3':'def','4':'ghi','5':'jkl','6':'mno','7':'pqrs','8':'tuv','9':'wxyz'}
        if digits=="":
            return []
        if len(digits)==1:
            return list(d[digits[0]])
        l=[]
        first = d[digits[0]]
        comb = self.letterCombinations(digits[1:])

        for i in first:
            for j in comb:
                l.append(i+j)
        return l
