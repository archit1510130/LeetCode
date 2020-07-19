class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        
        
        int n=mat.size();
        if(n==0)
            return 0;
        
        int m=mat[0].size();
        
      int arr[n][m];
        
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=m-1;j>=0;j--)
            {
                if(mat[i][j])
                    c++;
                else
                    c=0;
                arr[i][j]=c;
            }
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x=INT_MAX;
                for(int k=i;k<n;k++)
                {
                    x=min(x,arr[k][j]);
                    ans=ans+x;
                }
            }
        }
        
        return ans;
        
        
    }
};
