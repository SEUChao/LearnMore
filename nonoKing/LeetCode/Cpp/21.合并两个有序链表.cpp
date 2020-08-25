/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        ListNode *res = new ListNode();
        ListNode *tail = res;

        //建立头节点
        if (l1->val < l2->val)
        {
            res->val = l1->val;
            l1 = l1->next;
        }
        else
        {
            res->val = l2->val;
            l2 = l2->next;
        }

        while(l1 != nullptr || l2 != nullptr)
        {
            if (l1 != nullptr && l2 != nullptr)
            {
                if (l1->val < l2->val)
                {
                    tail->next = new ListNode(l1->val);
                    l1 = l1->next;
                    tail = tail->next;
                }
                else
                {
                    tail->next = new ListNode(l2->val);
                    l2 = l2->next;
                    tail = tail->next;
                }
            }
            else if (l1 == nullptr && l2 != nullptr)
            {
                tail->next = l2;
                break;
            }
            else if (l1 != nullptr && l2 == nullptr)
            {
                tail->next = l1;
                break;
            }
        }

        return res;
    }
};
// @lc code=end

