class Solution:
    def maxArea(self, heights: List[int]) -> int:
        # area = min(heights[i], heights[j]) * abs(i-j)
        l = 0
        r = len(heights) - 1
        maxArea = 0
        while l < r:
            area = min(heights[l], heights[r]) * abs(r-l)
            if area > maxArea: maxArea = area

            if heights[l] <= heights[r]:
                l += 1
            else:
                r -= 1

        return maxArea


        