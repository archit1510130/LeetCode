/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {

        vector<int>dp(26,0);

        for(int i=0;i<s.length();i++)
        {
            dp[s[i]-97]++;
        }

        for(int i=0;i<s.length();i++)
        {
            if(dp[s[i]-97]==1)
            {
                return i;
            }
        }
        return -1;


        
    }
};
// @lc code=end

