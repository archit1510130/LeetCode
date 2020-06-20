/*
 * @lc app=leetcode id=856 lang=cpp
 *
 * [856] Score of Parentheses
 */

// @lc code=start
class Solution {
public:
    int scoreOfParentheses(string S) {
        
        stack<int>s;
        int ans=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='(')
            {
                s.push(ans);
                ans=0;
            }
            else
            {
                ans=max(2*ans,1)+s.top();
                s.pop();
            }
            

        }
        return ans;
        
    }
};
// @lc code=end

