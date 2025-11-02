class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:

        nums: List[int] = sorted(nums1 + nums2)
        n: int = len(nums)

        if n % 2 == 0: # if the lenght is even(2, 4, 6 ... )
            mid1: int = nums[n//2 - 1]
            mid2: int = nums[n//2]
            return (mid1 + mid2) / 2
        else: # if the lenght is odd(1, 3, 5 ...)
            return nums[n//2]
