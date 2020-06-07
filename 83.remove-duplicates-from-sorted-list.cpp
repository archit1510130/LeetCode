/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        
        // remove all duplicates elements 
        
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
        if(head->next->next==NULL)
        {
            if(head->val==head->next->val)
            {
                head->next=NULL;
                return head;
            }
            else
                return head;
        }
        ListNode* ans=head;
        ListNode* ans2=head;
        
        int prev=head->val;
        head=head->next;
        
        while(head)
        {
            while(head && head->val==prev)
            {
                head=head->next;
            }
            
            if(head==NULL)ans->next=head;
            else
            {
            ans->next=head;
            ans=ans->next;
            prev=head->val;
            head=head->next;
            }
            
        }
             return ans2;
        
        
    }
};
// @lc code=end

