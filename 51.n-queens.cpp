/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */

// @lc code=start
class Solution {
public:
    
    bool isSafe(vector<string>board,int row,int col,int n)
    {
        //cout<<row<<endl;
        for(int i=0;i<row;i++)
        {
            if(board[i][col]=='Q')
                return false;
        }
        int x=row;
        int y=col;
        
        while(x>=0 and y>=0)
        {
            if(board[x][y]=='Q')
                return false;
            x--;
            y--;
        }
        x=row;
        y=col;
        while(x>=0 and y<n)
        {
            if(board[x][y]=='Q')
                return false;
            x--;
            y++;
        }
        return true;
    }
    
    
    bool solveQueen(vector<vector<string>>&ans,int i,int n,vector<string>board)
    {
        
        if(i==n)
        {
            // we reach at final place push vector here
            ans.push_back(board);
            return false;
        }
        
        for(int j=0;j<n;j++)
        {
           
            if(  isSafe(board,i,j,n))
            {
                 board[i][j]='Q';
                bool nextans=solveQueen(ans,i+1,n,board);
                if(nextans)
                    return true;
                else
                    board[i][j]='.';
            }
            
        }
        return false;
        
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
        string temp;
        for(int i=0;i<n;i++)
            temp.push_back('.');
        vector<string>board;
        for(int i=0;i<n;i++)
        {
            board.push_back(temp);
            
        }
        vector<vector<string>>ans;
        for(int i=0;i<n;i++)
        {
            cout<<board[i]<<endl;
        }
       bool a=solveQueen(ans,0,n,board);
        return ans;
        
        
    }
};
// @lc code=end

