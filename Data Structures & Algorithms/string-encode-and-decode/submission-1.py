class Solution:

    def encode(self, strs: List[str]) -> str:
        ans = ""
        for s in strs:
            ans += s + "~"
        return ans

    def decode(self, s: str) -> List[str]:
        prevIndex = -1
        ans = []
        for i in range(len(s)):
            if s[i] == "~": 
                print(f'i is {i}')
                ans.append(s[prevIndex+1:i])
                prevIndex = i
        return ans

