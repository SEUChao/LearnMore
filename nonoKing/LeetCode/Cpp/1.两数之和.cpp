/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <vector>
#include <map>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        if (nums.size() <= 0) return res;
        map<int, int> hashList;
        for (int i = 0; i < nums.size(); ++i)
        {
            int key = target - nums[i];
            map<int, int>::iterator it = hashList.find(key);
            if (it != hashList.end())
            {
                res.push_back(it->second);
                res.push_back(i);
                return res;
            }
            hashList.insert(make_pair(nums[i], i));
        }
        return res;
    }
};
// @lc code=end

