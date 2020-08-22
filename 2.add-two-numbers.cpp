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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        ListNode* head1=l1;
        ListNode* head2=l2;
        
        ListNode* head=new ListNode(0);
        ListNode* ans=head;
        int carry=0;
        
        while(head1 && head2)
        {
            int val=head1->val+head2->val+carry;
            if(val>=10)
                val=val-10;
            
            ListNode* node=new ListNode(val);
            if(head1->val+head2->val+carry>=10)
                carry=1;
            else
                carry=0;
            
            head->next=node;
            head=head->next;
            
            head1=head1->next;
            head2=head2->next;

        }
        
        
        while(head1)
        {
            int val=head1->val+carry;
            if(val>=10)
                val=val-10;
            ListNode* node=new ListNode(val);
            if(head1->val+carry>=10)
                carry=1;
            else
                carry=0;
            
            head->next=node;
            head=head->next;
            head1=head1->next; 
            
        }
        
           
        while(head2)
        {
            int val=head2->val+carry;
            if(val>=10)
                val=val-10;
            ListNode* node=new ListNode(val);
            if(head2->val+carry>=10)
                carry=1;
            else
                carry=0;
            
            head->next=node;
            head=head->next;
            head2=head2->next; 
            
        }
        
        
        if(carry)
        {
            
            ListNode* node=new ListNode(carry);
            head->next=node;
            head=head->next;
        }
        
        return ans->next;
        
        
    }
};