/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <string>
#include <stack>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) return false;
        stack<char> myStack;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '(') myStack.push(')');
            else if (s[i] == '{') myStack.push('}');
            else if (s[i] == '[') myStack.push(']');
            else if (myStack.empty()) return false;
            else if (myStack.top() != s[i]) return false;
            else myStack.pop();
        }
        return myStack.empty();
    }
};
// @lc code=end