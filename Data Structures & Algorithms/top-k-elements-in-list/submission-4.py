class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        freq = [[] for _ in range(len(nums) + 1)]
        count = {}

        for num in nums:
            if num in count: count[num] += 1
            else: count[num] = 1

        for value, frequency in count.items():
            freq[frequency].append(value)
        
        res = []
        for i in range(len(freq)-1, 0, -1):
            for val in freq[i]: res.append(val)
            if len(res) == k:
                return res
        