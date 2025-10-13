class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:

        num1: int = 0
        num2: int = 0

        for i in range(len(l1)):
            num1 += l1[i] * (10 ** i)

        for j in range(len(l2)):
            num2 += l2[j] * (10 ** j)

        result: int = num1 + num2

        returnList = []
        for i in range(len(result) -1, -1, -1):
            returnList.append(i)

        return returnList
