/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        vector<bool>col(n+1,false);
        vector<vector<bool>>matrix(n+1,col);
        int ans=0;
        int temp;
        int st;
        int end;
        if(n==0)return "";
        for(int i=0;i<n;i++)
        {
            matrix[i][i]=true;
            temp=i-i+1;
            if(temp>ans)
            {
                ans=temp;
                st=i;
                end=i;
            }
            
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                matrix[i][i+1]=true;
               temp=i+1-i+1;
                if(temp>ans)
                {
                    ans=temp;
                    st=i;
                    end=i+1;
                }
            }
        }
        
        for(int len=3;len<=n;len++)
        {
            for(int j=0;j<n-len+1;j++)
            {
                int k=j+len-1;
                if(s[j]==s[k])
                {
                    matrix[j][k]=matrix[j+1][k-1];
                    if(matrix[j][k])
                    {
                        temp=k-j+1;
                        if(temp>ans)
                        {
                            ans=temp;
                            st=j;
                            end=k;
                        }
                        
                        
                    }
                    
                }
            }
        }
        
        string ans2;
        int lenth=end-st+1;
        for(int i=st;i<st+lenth;i++)
        {
            ans2.push_back(s[i]);
        }
        return ans2;
        
        
        // now we will use that matrix 
        
        
    }
};
// @lc code=end

