class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        have: List[int] = []

        for i in range(len(words)):
            if x in words[i]:
                have.append(i)

        return have
