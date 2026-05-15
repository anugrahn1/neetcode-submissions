class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sLet = {}
        tLet = {}
        for letter in s:
            if letter in sLet:
                sLet[letter] += 1
            else:
                sLet[letter] = 0
        
        for letter in t:
            if letter in tLet:
                tLet[letter] += 1
            else:
                tLet[letter] = 0

        return sLet == tLet