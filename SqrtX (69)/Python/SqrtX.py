class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0:
            return 0

        l, r = 1, x
        while l <= r:
            centre = (l + r) // 2 # Division with result integer
            if centre * centre == x:
                return centre
            elif centre * centre < x:
                l = centre + 1
            else:
                r = centre - 1
        return r
