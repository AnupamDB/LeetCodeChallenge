class Solution(object):
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        char_count = [0] * 26

        for char in s:
            char_count[ord(char) - ord('a')] += 1

        for char in t:
            char_count[ord(char) - ord('a')] -= 1
            if char_count[ord(char) - ord('a')] < 0:
                return char

        return ''
