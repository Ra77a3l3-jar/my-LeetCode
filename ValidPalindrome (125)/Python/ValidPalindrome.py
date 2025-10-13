class Solution:
    def isPalindrome(self, s: str) -> bool:

        alphanumeric = "".join(c for c in s if c.isalnum()) 
        alphanumeric = alphanumeric.lower()
        if alphanumeric == alphanumeric[::-1]:
            print(alphanumeric)
            print(alphanumeric[::-1])
            return True
        else:
            return False
