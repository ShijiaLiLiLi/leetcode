class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cur_idx = -1;
        int ori_idx = 0;
        while (ori_idx < nums.size()) {
            if (nums[ori_idx] != val) {
                nums[++cur_idx] = nums[ori_idx];
            }
            ori_idx++;
        }
        return (cur_idx+1);
    }
};