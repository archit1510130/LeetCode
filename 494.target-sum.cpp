class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        
        
         long long int sum=accumulate(nums.begin(), nums.end(), 0);
        
        long long int  target=(S+sum)/2;
        cout<<target<<endl;
        
        if((S+sum)%2)return 0;
        if(target>sum)return 0;
        
        vector< long long int>dp(target+1);
         long long int n=nums.size();
        dp[0]=1;
    
     long long int it=0;
        for( long long int i=0;i<n;i++)
        {
            it+=nums[i];
            it=min(target,it);
            for( long long int k=it;k>=nums[i];k--)
            {
                
                dp[k]+=dp[k-nums[i]];
            }
            
        }
        
        for( long long int i=0;i<dp.size();i++)
        {
            cout<<dp[i]<<" ";
            
        }
        cout<<endl;
        
        return dp[target];
        
    }
};