class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # [2,20,4,10,3,4,5]
        # convert to set and back to list 
        # sort
        # [2, 3, 4, 5, 10, 20]
        # num = 0
        # ans = []
        # if num ahead == num + 1: num += 1
        # else: ans.append(num) and num = 0
        # return max(ans)
        if len(nums) == 0: return 0
        nums = list(set(nums))
        nums.sort()
        num = 1
        ans = []
        print(nums)
        for i in range(len(nums)-1):
            if nums[i+1] == nums[i] + 1:
                num += 1 
            else:
                ans.append(num)
                num = 1
        ans.append(num)
        return max(ans)
