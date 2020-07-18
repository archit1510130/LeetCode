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
    
    int get_depth(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        int left=get_depth(root->left);
        int right=get_depth(root->right);
        
        
        return max(left,right)+1;
    }
    int maxDepth(TreeNode* root) {
        
        int ans=get_depth(root);
        return ans;
        
    }
};