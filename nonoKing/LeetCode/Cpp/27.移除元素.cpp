/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) return 0;
        int res = 0;
        for (int curIdx = 0; curIdx < nums.size(); ++curIdx)
        {
            if (nums[curIdx] != val)
            {
                nums[res++] = nums[curIdx];
            }
        }
        return res;
    }
};
// @lc code=end

