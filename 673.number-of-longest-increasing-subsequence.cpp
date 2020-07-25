class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        
            int n=nums.size();
        if(n==0)return n;
        if(n==1)return 1;
        
        vector<pair<int,int>>dp(n,{1,1});
     
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    if(dp[j].first>=dp[i].first)
                    {
                        dp[i].first=dp[j].first+1;
                        dp[i].second=dp[j].second;
                    }
                    else
                    {
                        if(dp[j].first+1==dp[i].first)
                        {
                            dp[i].second+=dp[j].second;
                        }
                    }
                
                
            }
        }
        }
        
     int lon=0;
    int ans=0;
            
            for(int i=0;i<dp.size();i++)
            {
                int t=dp[i].first;
                if(t>lon)
                    lon=t;
            }
            
             for(int i=0;i<dp.size();i++)
            {
                if(dp[i].first==lon)
                    ans+=dp[i].second;
            }
        return ans;
        
        
        
    }
}
    ;