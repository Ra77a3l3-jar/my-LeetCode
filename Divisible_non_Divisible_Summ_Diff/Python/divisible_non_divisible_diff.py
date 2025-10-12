class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        sum_n: int = 0
        sum_m: int = 0
        
        for i in range(1, n + 1):
            
            if i % m == 0:
                sum_m += i
            else:
                sum_n += i
        return sum_n - sum_m
