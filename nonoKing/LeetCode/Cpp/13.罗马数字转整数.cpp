/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        if (s.size() == 0) return 0;
        int res = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            bool notEnd = (i < s.size() - 1);
            switch (s[i])
            {
            case 'M':
                res += 1000;
                break;
            case 'D':
                res += 500;
                break;
            case 'C':
                if (notEnd)
                {
                    if(s[i+1] == 'D')
                    {
                        res += 400;
                        ++i;
                    }
                    else if (s[i+1] == 'M')
                    {
                        res += 900;
                        ++i;
                    }
                    else
                    {
                        res += 100;
                    }
                }
                else
                {
                    res += 100;
                }
                break;
            case 'L':
                res += 50;
                break;
            case 'X':
                if (notEnd)
                {
                    if(s[i+1] == 'L')
                    {
                        res += 40;
                        ++i;
                    }
                    else if (s[i+1] == 'C')
                    {
                        res += 90;
                        ++i;
                    }
                    else
                    {
                        res += 10;
                    }
                }
                else
                {
                    res += 10;
                }
                break;
            case 'V':
                res += 5;
                break;
            case 'I':
                if (notEnd)
                {
                    if(s[i+1] == 'V')
                    {
                        res += 4;
                        ++i;
                    }
                    else if (s[i+1] == 'X')
                    {
                        res += 9;
                        ++i;
                    }
                    else
                    {
                        res += 1;
                    }
                }
                else
                {
                    res += 1;
                }
                break;
            default:
                break;
            }
        }
        return res;
    }
};
// @lc code=end

