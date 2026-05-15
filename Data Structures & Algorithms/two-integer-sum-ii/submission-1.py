class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        ans = []

        indexes = {}

        for i in range(len(numbers)):
            indexes[numbers[i]] = i
            
        for i,num in enumerate(numbers):
            diff = target - num
            if diff in indexes:
                ans.append(i+1)
                ans.append(indexes[diff]+1)
                return ans

        
            