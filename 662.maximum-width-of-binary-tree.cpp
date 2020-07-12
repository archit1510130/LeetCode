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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<pair<TreeNode* , unsigned long long int>>q;
        q.push({root,0});
      unsigned long long int result=1;
        
        while(!q.empty())
        {
             unsigned long long int  count =q.size();
           unsigned long long int st=q.front().second;
           unsigned long long int end=q.back().second;
            
            result=max(end-st+1,result);
            
            
            for(unsigned long long int i=0;i<count;i++)
            {
                pair<TreeNode*,unsigned long long int>p=q.front();
                q.pop();
                
               unsigned   long long int idx=p.second;
                if(p.first->left)
                    q.push({p.first->left,2*idx+1});
                if(p.first->right)
                    q.push({p.first->right,2*idx+2});
                
                
                
            }
            
        }
        return result;
        
        
        
        
        
    }
};