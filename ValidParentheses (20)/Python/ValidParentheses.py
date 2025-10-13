class Solution:
    def isValid(self, s: str) -> bool:
        length = len(s)
        if length % 2 != 0:
            return False

        stack = []
        topstack = -1

        for ch in s:
            if ch in "([{":
                stack.append(ch)
                topstack += 1
                print(f"Adding '{ch}' → stack: {stack}")
            else:
                if topstack == -1:
                    print("The stack is clean (too many closing brackets)")
                    return False
                if ((ch == ')' and stack[topstack] != '(') or
                    (ch == ']' and stack[topstack] != '[') or
                    (ch == '}' and stack[topstack] != '{')):
                    print(f"Mismatched: {ch} and {stack[topstack]}")
                    return False
                print(f"Found match {stack[topstack]} and {ch}")
                stack.pop()
                topstack -= 1

        return topstack == -1
