class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1 = 0
        num2 = 0
        multiplier = 1

        ptrL1 = l1
        while ptrL1:
            num1 += ptrL1.val * multiplier
            multiplier *= 10
            ptrL1 = ptrL1.next

        multiplier = 1
        ptrL2 = l2
        while ptrL2:
            num2 += ptrL2.val * multiplier
            multiplier *= 10
            ptrL2 = ptrL2.next

        result = num1 + num2

        dummy = ListNode(0) # Initialize new list
        curr = dummy

        if result == 0:
            return ListNode(0)

        while result > 0:
            curr.next = ListNode(result % 10) # (result % 10) will be the value saved in the node
            result //= 10 # Gives the back the 80 if result is 807 while result % 10 gives back 7
            curr = curr.next

        return dummy.next
