
#define ll long long int 

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        ll sum=accumulate(nums.begin(),nums.end(),0);
        
        cout<<sum<<endl;
        
        if(sum%2)return false;
        ll target=sum/2;
        
        vector<bool>dp(target+1,false);
        
        dp[0]=true;
        
        for(ll i=0;i<nums.size();i++)
        {
            for(int k=target;k>=nums[i];k--)
            {
                dp[k]=dp[k] || dp[k-nums[i]];
            }
        }
        
        
        return dp[target];
        
        
        
    }
};