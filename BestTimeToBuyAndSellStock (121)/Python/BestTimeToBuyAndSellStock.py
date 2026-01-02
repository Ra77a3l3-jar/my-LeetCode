class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if not prices:
            return 0

        if len(prices) < 2:
            return 0

        minPrice = prices[0]
        maxProfit = 0

        for i in range(1, len(prices)):
            if prices[i] < minPrice:
                minPrice = prices[i]
            else:
                profit = prices[i] - minPrice
                if profit > maxProfit:
                    maxProfit = profit

        return maxProfit
