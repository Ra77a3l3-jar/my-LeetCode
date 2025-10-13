
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        lenHey = len(haystack)
        lenNeedle = len(needle)

        if lenNeedle == 0:
            return 0

        if lenHey < lenNeedle:
            return -1

        for i in range(lenHey - lenNeedle + 1):
            for j in range(lenNeedle):
                if haystack[i + j] != needle[j]:
                    break
            else:
                return i
        return -1
