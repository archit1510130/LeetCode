/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
          if(head==NULL) return NULL;
        ListNode* FakeHead=new ListNode(-72);
        FakeHead->next=head;
        
        
        ListNode* pre=FakeHead;
        ListNode* cur=head;
        ListNode* first=FakeHead;
    
        while(cur and cur->next)
        {
            if(pre->val!=cur->val and cur->val!=cur->next->val)
            {
                first->next=cur;
                first=first->next;
            }
            pre=cur;
            cur=cur->next;
            
        }
    
        if(pre->val!=cur->val)
        {
            first->next=cur;
            first=first->next;
        }
        first->next=NULL;
    return FakeHead->next;
    
    
    
    
    
    
   
    
        
    }
};
// @lc code=end

