class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        max_len: int = 0
        curr_len: int = 0

        for i in range(0, len(s)):
            if s[i] != ' ':
                curr_len += 1
                max_len = curr_len
            else:
                curr_len = 0

        return max_len
