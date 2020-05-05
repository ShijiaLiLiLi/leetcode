#include <vector>
class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        
        int new_index = 0;
        int len = 1;
        int ori_index = 1;
        while (ori_index < nums.size()) {
            if (nums[ori_index] != nums[new_index]) {
                nums[++new_index] = nums[ori_index++];
                len++;
            }
            else {
                ori_index++;
            }

        }
        return len;
    }

    
};