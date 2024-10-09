#week05-5.py
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a = s.split() #斷字
        return len(a[-1])