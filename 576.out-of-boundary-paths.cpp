class Solution {
public:
    int M = 1000000007;
    
    int get_ans(int m,int n,int N,int i,int j,vector<vector<vector<int>>>&dp)
    {
        if(i==m or j==n or i<0 or j<0)return 1;
        if(N==0)return 0;
        
        if(dp[i][j][N]!=-1)
            return dp[i][j][N];
        
        
        dp[i][j][N]=((get_ans(m,n,N-1,i+1,j,dp)%M+get_ans(m,n,N-1,i-1,j,dp)%M)%M +(get_ans(m,n,N-1,i,j-1,dp)%M+get_ans(m,n,N-1,i,j+1,dp)%M)%M)%M;
        
        
        
        return dp[i][j][N];
    }
        
    
    
    int findPaths(int m, int n, int N, int i, int j) {
        
    vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(N+1,-1)));
        
        
        return get_ans(m,n,N,i,j,dp);
        
        
        
        
        
        
        
    }
};