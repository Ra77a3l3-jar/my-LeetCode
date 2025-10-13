class Solution:
    def majorityElement(self, nums: List[int]) -> int:

        res = {}

        for i in nums:
            if i in res:
                res[i] += 1
            else:
                res[i] = 1

        max_key:int = None
        max_count: int = 0

        for key in res:
            if res[key] > max_count:
                max_count = res[key]
                max_key = key   
