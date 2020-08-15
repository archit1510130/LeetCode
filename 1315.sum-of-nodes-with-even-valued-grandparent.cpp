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
    int sumEvenGrandparent(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* cur=q.front();
                q.pop();
                if(cur->left)
                {
                    q.push(cur->left);
                    if(cur->val%2==0 and cur->left->left)
                    {
                        ans+=cur->left->left->val;
                        
                    }
                      if(cur->val%2==0 and cur->left->right)
                    {
                        ans+=cur->left->right->val;
                        
                    }
                    
                }
                if(cur->right)
                {
                    q.push(cur->right);
                       if(cur->val%2==0 and cur->right->left)
                    {
                        ans+=cur->right->left->val;
                        
                    }
                      if(cur->val%2==0 and cur->right->right)
                    {
                        ans+=cur->right->right->val;
                        
                    }
                    
                }
            }
        }
        return ans;
        
    }
};