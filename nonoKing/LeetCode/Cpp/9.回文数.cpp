/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x > 0 && x % 10 == 0)) return false;
        int reversedNum = 0;
        while (x > reversedNum)
        {
            reversedNum = reversedNum * 10 + x % 10;
            x /= 10;
        }
        return reversedNum == x || reversedNum / 10 == x;
    }
};
// @lc code=end

