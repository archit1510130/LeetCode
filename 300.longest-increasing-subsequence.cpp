class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)return n;
        if(n==1)return 1;
        
        vector<int>dp(n,1);
        int ans=INT_MIN;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    dp[i]=max(1+dp[j],dp[i]);
                }
            
                
                ans=max(ans,dp[i]);
                
                
            }
        }
        
        for(int i=0;i<dp.size();i++)
        {
            cout<<dp[i]<<" ";
        }
        cout<<endl;
        return ans;
        
        
    }
};