class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        freq = {}

        for i in nums:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1

        for key in freq:
            if freq[key] == 1:
                return key
