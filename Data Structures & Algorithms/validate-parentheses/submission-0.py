class Solution:
    def isValid(self, s: str) -> bool:

        stack = []
        matchingClose = {"}" : "{", ")" : "(", "]" : "["}

        for char in s:
            if char in matchingClose: # if its a closing
                if stack and stack[-1] == matchingClose[char]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(char)
        
        return len(stack) == 0
        