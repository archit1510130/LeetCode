/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        
        if(!head)return NULL;
        if(head->next==NULL)return head;
        
        ListNode* prev=NULL;
        ListNode* Next;
        while(head)
        {
            Next=head->next;
            head->next=prev;
            prev=head;
            head=Next;
        }
        return prev;
        
    }
};
// @lc code=end

