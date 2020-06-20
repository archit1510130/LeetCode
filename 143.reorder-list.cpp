/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
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
     ListNode* reverse(ListNode* head) {
        
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
    void reorderList(ListNode* A) {
            
    if(A==NULL or A->next==NULL)return ;
    
    ListNode* p;
    ListNode* q;
    p=A;
    q=A;
    ListNode* mid;
    
    while(1)
    {
         p=p->next->next;
        if(p==NULL)
        {
            mid=q->next;
            break;
        }
        if(p->next==NULL)
        {
            mid=q->next;
            break;
            
        }
       
        q=q->next;
        
        
    }
    q->next=NULL;
    
    ListNode* st1=A;
   ListNode* st2= reverse(mid);
   ListNode* ans=st1;
   st1=st1->next;
   int chance=0;
   
  while(st1!=NULL && st2!=NULL)
  {
      if(chance%2==0)
      {
          ans->next=st2;
          st2=st2->next;
           
          chance=1;
      }
      else
      {
          ans->next=st1;
          st1=st1->next;
          chance=0;
           
      }
       
      ans=ans->next;
       
  }
   
  if(st2!=NULL)
  {
      ans->next=st2;
  }
   
   
   
    
    
    
    
    
    

        
        
        
        
        
        
    }
};
// @lc code=end

