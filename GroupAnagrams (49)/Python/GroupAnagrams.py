class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        res = defaultdict(list) # Hash map di list vuote {key:[], key:[], key:[]}

        for s in strs:
            track = [0] * 26 # Array for frequency of each char in a str used as key
            for c in s:
                track[ord(c) = orc('a')] += 1 # ord(c)-ord('a') = index for given char
            res[tuple(track)].append(s) # Appens str s to list with key track. Casted track into a tuple since keys have to be immutable
            
        return list(res.values())
