class Solution {
public:
        void dfs(vector<vector<char>>& grid,int i,int j,int n,int m)
    {
            
        if(i<0 || j<0 || i>=n || j>=m)
                return ;
            
        if(grid[i][j]=='0')
        {
            return ;
        }
        
        
        grid[i][j]='0';
        if(i>=0 and j>=0 and i<n and j<m)
        {
            
            dfs(grid,i+1,j,n,m);
            dfs(grid,i-1,j,n,m);
            dfs(grid,i,j+1,n,m);
            dfs(grid,i,j-1,n,m);  
                
        }
         
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        
        int n=grid.size();
        if(n==0)return 0;
        int m=grid[0].size();
        int ans=0;
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    dfs(grid,i,j,n,m);
                    
                }
            }
        }
        
        return ans;
        
    }
};