class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = {}
        for i, num in enumerate(nums):
            if num in seen:
                return True
            seen[num] = i
        return False
