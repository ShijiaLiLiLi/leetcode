class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        cur_idx = -1
        ori_idx = 0
        while ori_idx < len(nums):
            if nums[ori_idx] != val:
                cur_idx += 1
                nums[cur_idx] = nums[ori_idx]
            ori_idx += 1
        return (cur_idx+1)