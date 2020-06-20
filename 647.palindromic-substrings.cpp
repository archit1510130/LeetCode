/*
 * @lc app=leetcode id=647 lang=cpp
 *
 * [647] Palindromic Substrings
 */

// @lc code=start
class Solution {
public:
    int countSubstrings(string s) {

        int n=s.length();

        vector<bool>col(n+1,false);
        vector<vector<bool>>matrix(n+1,col);

        int ans=0;
        for(int i=0;i<n;i++)
        {
            matrix[i][i]=true;
            ans++;
        }

        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                matrix[i][i+1]=true;
                ans++;
            }
        }
  //  cout<<ans<<endl;
        for(int i=0;i<n-2;i++)
        {
            for(int j=0;j<n-2-i;j++)
            {
                int k=2+j+i;
               // cout<<j<<k<<endl;
                if(s[k]==s[j])
                {
                    if(matrix[j+1][k-1])
                    {
                        ans++;
                        matrix[j][k]=true;
                    }
                }
            }
        }
        return ans;
        
    }
};
// @lc code=end

