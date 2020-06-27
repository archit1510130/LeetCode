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
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    ListNode* find_mid(ListNode*st,ListNode* end)
    {
        ListNode* p=st;
        ListNode* q=st;
        
        
        while(q!=end and q->next!=end)
        {
            p=p->next;
            q=q->next->next;
        }
        
        return p;
    }
    TreeNode* get_answer(ListNode* st,ListNode* end)
    {
        if(st==end or st==NULL)
            return NULL;
        
        
        ListNode* mid=find_mid(st,end);
        TreeNode* curr=new TreeNode(mid->val);
        curr->left=get_answer(st,mid);
        curr->right=get_answer(mid->next,end);
        
        return curr;
        
        
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
        
        
        if(head==NULL)
            return NULL;
        
        TreeNode* root=get_answer(head,NULL);
        return root;
        
    }
};
// @lc code=end

