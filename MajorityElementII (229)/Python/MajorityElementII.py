class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        res = {}

        for i in nums:
            if i in res:
                res[i] += 1
            else:
                res[i] = 1

        threshold = len(nums) // 3 # Minimum frequency to return value

        max_keys = []
        for key in res:
            if res[key] > threshold:
                max_keys.append(key)

        return max_keys
