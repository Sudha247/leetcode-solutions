class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return abs(sum(nums) - sum(range(1,len(nums)+1)))
