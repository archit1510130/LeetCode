/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL )return head;
        if(head->next==NULL and n==1)return NULL;
        
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* slow=dummy;
        ListNode* fast=dummy;
        
        for(int i=1;i<=n+1;i++)
        {
           //if(fast==NULL)return head;
            fast=fast->next;
        }
        
       // cout<<fast->val<<endl;
        
        while(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        slow->next=slow->next->next;
        
        return dummy->next;
        
        
    }
};
// @lc code=end

