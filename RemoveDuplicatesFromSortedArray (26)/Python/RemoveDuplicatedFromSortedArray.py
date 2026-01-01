class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0

        deleted = 0
        lastUnique = nums[0]

        for i in range(1, len(nums)):
            if nums[i] == lastUnique:
                deleted += 1
            else:
                lastUnique = nums[i]
                nums[i - deleted] = nums[i]

        return len(nums) - deleted
