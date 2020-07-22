class Solution {
public:
    int dp[601][101][101];
    
    int get_ans(vector<string>&strs,int m ,int n,int i)
    {
        if(m<0 or n<0 )
            return INT_MIN;
        
        if(i>=strs.size())
            return 0;
        
        if(dp[i][m][n]!=-1)
            return dp[i][m][n];
        
        
        int ones=0;
        int zeros=0;
        for(int in=0;in<strs[i].length();in++ )
        {
            if(strs[i][in]=='1')
                ones++;
            else
                zeros++;
            
        }
    
     dp[i][m][n]= max(1+get_ans(strs,m-zeros,n-ones,i+1),get_ans(strs,m,n,i+1));
        
        return dp[i][m][n];
    }
    
    
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        
        
        int size=strs.size();
       
       

       
        
      for(int i = 0;i<=600;i++){ 

        for(int j = 0;j<=100;j++){ 

            for(int l=0;l<=100;l++) 

            dp[i][j][l]=-1; 

        } 

    }
         
        int ans=get_ans(strs,m,n,0);
        
        
        return ans;
        
        
        
    }
};