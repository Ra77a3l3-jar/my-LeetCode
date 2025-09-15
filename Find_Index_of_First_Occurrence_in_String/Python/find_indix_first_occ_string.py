
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
        
if __name__ == "__main__":
    solution = Solution()
    haystack = str(input("Enter the haystack string: "))
    needle = str(input("Enter the needle string: "))
    result = solution.strStr(haystack, needle)
    if result == -1:
        print("The needle is not present in the haystack")
    else:
        print(f"The needle is present in the haystack and starts at index {result}")
