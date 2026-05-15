class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indexes = {} # val : index
        for i in range(len(nums)):
            lookingForNum = target - nums[i]
            if lookingForNum in indexes: # look for difference in the hashmap
                return [indexes[lookingForNum],i]
            indexes[nums[i]] = i 

        