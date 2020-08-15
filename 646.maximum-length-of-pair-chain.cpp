class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        int n=pairs.size();
        if(n==0)
            return 0;
        sort(pairs.begin(),pairs.end());
        vector<int>dp(n+1,1);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(pairs[i][0]>pairs[j][1])
                {
                    dp[i]=max(1+dp[j],dp[i]);
                }
            }
        }
        
        return dp[n-1];
        
    }
};