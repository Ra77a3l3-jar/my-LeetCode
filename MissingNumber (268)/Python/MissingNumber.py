class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        seen = set(nums)
        l = len(nums)

        for i in range(l + 1):
            if i not in seen:
                return i
