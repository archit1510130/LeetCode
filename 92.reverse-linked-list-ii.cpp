/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
     ListNode* reverseList(ListNode* head,int len) {
        
        if(!head)return NULL;
        if(head->next==NULL)return head;
        int count=1;
        ListNode* prev=NULL;
        ListNode* Next;
        while(head and count<=len)
        {
            cout<<head->val<<endl;
            Next=head->next;
            head->next=prev;
            prev=head;
            head=Next;
            count++;
        }
        return prev;
        
    }
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        if(head==NULL)return head;
        if(m==n)return head;
        if(head->next==NULL)return head;
        ListNode*prev=NULL;
        ListNode*next=NULL;
        ListNode*tar=NULL;
        int c=1;
        ListNode* temp=head;
        
        while(temp)
        {
            if(c==m-1)
                prev=temp;
            if(c==n+1)
                next=temp;
            if(c==m)
                tar=temp;
            temp=temp->next; 
            c++;
        }
        ListNode* temphead=reverseList(tar,n-m+1) ;
        if(prev!=NULL)
             prev->next=temphead;
        tar->next=next;
        
        if(prev==NULL)
            return temphead;
        return head;
        
        
    }
};
// @lc code=end

