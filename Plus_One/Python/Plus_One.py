class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        for i in range(len(digits) - 1, -1, -1):
            if digits[i] != 9:
                digits[i] += 1
                return digits
            digits[i] = 0 # If digit was 9 it will become 0 and the next one will increase by 1 [129] -> [130]

        return [1] + digits # If all the digits were 9 it adds a 1 at the front and the rest are all 0 [999] -> [1000]
