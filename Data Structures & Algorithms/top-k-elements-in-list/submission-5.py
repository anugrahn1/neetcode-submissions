class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        ans = [[] for _ in range(len(nums) + 1)]
        for num in nums:
            if num in freq: freq[num] += 1
            else: freq[num] = 1
        
        for value, frequency in freq.items():
            ans[frequency].append(value)
            
        res = []
        for i in range(len(ans)-1, 0, -1):
            for val in ans[i]:
                res.append(val) 
            if len(res) == k: return res