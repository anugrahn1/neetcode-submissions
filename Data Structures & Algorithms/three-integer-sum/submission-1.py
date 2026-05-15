class Solution:
    def threeSum(self, nums):
        nums.sort() # O(nlogn)
        ans = []

        for i, num in enumerate(nums): # O(n)
            if i != 0 and num == nums[i-1]: continue

            l = i+1
            r = len(nums) - 1
            while l < r: # O(n)
                testSum = nums[l] + nums[r] + num
                if testSum > 0:
                    r -= 1
                elif testSum < 0:
                    l += 1
                else:
                    ans.append([num, nums[l], nums[r]])
                    l += 1
                    while nums[l-1] == nums[l] and l < r: # makes left pointer skip duplicates
                        l += 1

        return ans
