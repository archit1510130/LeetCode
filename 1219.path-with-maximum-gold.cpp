/*
 * @lc app=leetcode id=1219 lang=cpp
 *
 * [1219] Path with Maximum Gold
 */

// @lc code=start
class Solution {
public:
    
    int get_answer(int i,int j,vector<vector<int>>&grid,int row,int col)
    {
        if(i<0 or j<0 or i>=row or j>=col)
            return 0;
        if(grid[i][j]==0)return 0;
        
        int temp=grid[i][j];
        grid[i][j]=0;
        int top= get_answer(i-1,j,grid, row, col);
        int bottom= get_answer( i+1, j,grid, row, col);
        int left= get_answer(i, j-1,grid, row,col);
        int right= get_answer( i, j+1,grid, row,col);
        grid[i][j]=temp;
        
        return temp+max(top,max(bottom,max(left,right)));
        
        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int row=grid.size();
        if(row==0)return 0;
        int col=grid[0].size();
        int ans=0;
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j])
                {
                    int st=grid[i][j];
                    ans=max(ans,get_answer(i,j,grid,row,col));
                    cout<<grid[i][j]<<" "<<ans<<endl;
                }
            }
        }
        return ans;
        
        
    }
};
// @lc code=end

