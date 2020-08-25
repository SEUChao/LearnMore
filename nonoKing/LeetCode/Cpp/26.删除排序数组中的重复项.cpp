/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        else if (nums.size() == 1) return 1;

        int res = 1;
        for (int currIdx = 1; currIdx < nums.size(); ++currIdx)
        {
            if (nums[currIdx] == nums[currIdx - 1])
            {
                continue;
            }
            else
            {
                nums[res++] = nums[currIdx];
            }
        }
        return res;
    }
};
// @lc code=end

