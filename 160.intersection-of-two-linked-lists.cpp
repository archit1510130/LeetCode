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
    int getLength(ListNode* h)
    {
        ListNode* head=h;
        int count=0;
        while(head)
        {
            count++;
            head=head->next;
        }
        
        return count;
    }
    
    ListNode* findNode(ListNode* A,ListNode* B)
    {
        ListNode* ans=NULL;
        while(A && B)
        {
            if(A==B)
                return A;
            A=A->next;
            B=B->next;
            
        }
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA==NULL or headB==NULL)
            return NULL;
        int n=getLength(headA);
        int m=getLength(headB);
        
        
        if(n==m)
            return findNode(headA,headB);
        
        
        if(n>m)
        {
            int dif=n-m;
            while(dif--)
            {
                headA=headA->next;
                
            }
            
            return findNode(headA,headB);
        }
        
        if(m>n)
        {
            int dif=m-n;
            while(dif--)
            {
                headB=headB->next;
            }
            
            return findNode(headA,headB);
        }
        
        return NULL;
        
        
    }
};