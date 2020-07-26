class Solution {
public:
    
     struct TreeNode {
      int val;
      int count=1;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0),count(1) ,left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, int count,TreeNode *left, TreeNode *right) : val(x),count(x), left(left), right(right) {}
 };
    
    int insertNode(TreeNode* root,int val)
    {
        int ans=0;
        bool isConnect=false;
        TreeNode* temp=new TreeNode(val);
        while(!isConnect)
        {
            if(temp->val<=root->val)
            {
                root->count++;
                if(root->left==NULL)
                {
                    root->left=temp;
                    isConnect=true;
                }
                else
                    root=root->left;
            }
            
            else
            {
                ans=ans+root->count;
                
                if(root->right==NULL)
                {
                    root->right=temp;
                    isConnect=true;
                }
                else
                    root=root->right;
            }
            
        }
        
        return ans;
        
        
        return 0;
        
    }
    vector<int> countSmaller(vector<int>& nums) {
        
        
        vector<int>ans;
        int n=nums.size();
        if(n==0)
            return ans;
    
        
        TreeNode* root=new TreeNode(nums[n-1]);
        cout<<root->count<<endl;
        ans.push_back(0);
        
        for(int i=n-2;i>=0;i--)
        {
            
            int c=insertNode(root,nums[i]);
            ans.push_back(c);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};