/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
#include <limits>
using namespace std;
// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x != 0)
        {
            if (res > INT_MAX / 10 || (res == INT_MAX / 10) && (x % 10 > 7)) return 0;
            if (res < INT_MIN / 10 || (res == INT_MIN / 10) && (x % 10 < -8)) return 0;
            res = res * 10 + x % 10;
            x = x / 10;
        }
        return res;
    }
};
// @lc code=end

