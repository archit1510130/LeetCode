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
    
    unordered_map<int,int>count;
    int maxCount=0;
    
    
    int  dfs(TreeNode* root)
    {
        if(root==NULL)return 0;
        
        int sum=dfs(root->left)+dfs(root->right)+root->val;
        
        count[sum]++;
        maxCount=max(maxCount,count[sum]);
        
        return sum;
        
        
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        
        vector<int>ans;
        
        if(root==NULL)return ans;
        
        
        dfs(root);
        
        for(auto i:count)
        {
            if(i.second==maxCount)
                ans.push_back(i.first);
        }
        
        return ans;
        
        
        
        
        
        
    }
};