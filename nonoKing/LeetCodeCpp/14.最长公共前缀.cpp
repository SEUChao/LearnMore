/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        if (strs.size() == 1) return strs[0];

        string res;
        for (int i = 0; i < strs[0].size(); ++i)
        {
            for (int j = 1; j < strs.size(); ++j)
            {
                if (strs[j][i] != strs[j - 1][i])
                    return res;
            }
            res.append(1, strs[0][i]);
        }
        return res;
    }
};
// @lc code=end

