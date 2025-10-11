class Solution:
    def lengthOfLastWord(self, s: str) -> int:

        word_count: int = 0
        last_word: int = 0

        for s in range(0, len(s)):
            if i == ' ':
                if i != [i - 1]:
                    last_word = word_count
                    word_count = 0
            else:
                word_count += 1
        if word_count > 0:
            return word_count
        elif word_count == 0 and last_word > 0:
            return last_word
