/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode *p=head;
        ListNode *q=head;
        while(p and q and q->next)
        {
            p=p->next;
            q=q->next->next;
            if(p==q)
                return 1;
        }
        return 0;
        
    }
};
// @lc code=end

