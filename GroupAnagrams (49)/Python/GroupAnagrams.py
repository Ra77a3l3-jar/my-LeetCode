class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        res = defaultdict(list) # Hash map di list vuote {key:[], key:[], key:[]}

        for s in strs:
            key = ''.join(sorted(s))
            res[key].append(s) # Based on the key it places the element in a given list

        return list(res.values())
