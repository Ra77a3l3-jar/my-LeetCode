class Solution(object):
    def isPalindrome(self, x: int) -> bool:
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:
            return False
        else:
            x = str(x)
            if x == x[::-1]:
                return True
            else:
                return False

if __name__ == "__main__":
    solution = Solution()
    x = int(input("Enter a number to check: "))
    result = solution.isPalindrome(x)
    if result:
        print("The number is palindrome")
    else:
        print("The number is not palindrome")
