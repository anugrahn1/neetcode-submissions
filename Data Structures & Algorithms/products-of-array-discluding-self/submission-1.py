class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
            pre = 1
            post = 1
            ans = []

            # prefix sum
            for i in range(len(nums)):
                ans.append(pre)
                pre *= nums[i]

            # postfix sum
            for i in range(len(nums)-1, -1, -1):
                ans[i] *= post
                post *= nums[i]
            return ans