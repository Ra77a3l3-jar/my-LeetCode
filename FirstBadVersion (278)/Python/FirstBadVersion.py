# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
    l = 1
    r = n

    while l < r:
        centre = (l + r) // 2
        if isBadVersion(centre):
            r = centre
        else:
            l = centre + 1

    return l
  
