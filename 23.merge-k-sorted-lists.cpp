class Solution {
    typedef ListNode* ls;
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        struct comp{
            bool operator()(ls l1,ls l2){
                return l1->val>l2->val;
            }
        };
        priority_queue<ls,vector<ls>,comp> pq;
        for(auto v:lists){
            if(v!=NULL){
            pq.push(v);
            }
        }
        ListNode* ret=new ListNode();
        ListNode* cp=ret;
        while(!pq.empty()){
            auto l=pq.top();
            pq.pop();
            cp->next=new ListNode(l->val);
            if(l->next!=NULL){
                pq.push(l->next);
            }
            cp=cp->next;
        }
        return ret->next;
    }
};