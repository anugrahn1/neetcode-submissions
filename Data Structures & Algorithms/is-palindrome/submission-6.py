class Solution:
    def isPalindrome(self, s: str) -> bool:
        clean = ""
        for char in s:
            if char.isalnum():
                clean += char.lower()
            
        start = 0
        end = len(clean) - 1
        while start < end:
            if clean[start] != clean[end]:
                print(clean[start], clean[end])
                return False
            
            start += 1
            end -= 1
        return True