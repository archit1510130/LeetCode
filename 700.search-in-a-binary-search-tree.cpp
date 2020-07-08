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
    
    TreeNode* helperSearch(TreeNode* root,int val)
    {
        
        if(root==NULL)
            return NULL;
        
        if(root->left==NULL and root->right==NULL)
        {
            if(root->val!=val)
                return NULL;
            return root;
        }
        
        
        if(root->val==val)
            return root;
        
        if(root->val>val)
        {
           return  helperSearch(root->left,val);
        }
        
        return helperSearch(root->right,val);
        
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        
        return helperSearch(root,val);
        
    }
};