from typing import List
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        
        cur_idx = 0
        ori_idx = 1
        length = 1
        while (ori_idx < len(nums)):
            if nums[ori_idx] != nums[ori_idx-1]:
                cur_idx += 1
                nums[cur_idx] = nums[ori_idx]
                length += 1
            ori_idx += 1
        return length
                