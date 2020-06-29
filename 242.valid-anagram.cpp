/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {

        int n=s.length();
        int m=t.length();
        if(n!=m)
        return false;

        vector<int>freq(27,0);

        for(int i=0;i<n;i++)
        {
            freq[s[i]-96]++;
            freq[t[i]-96]--;
        }


        bool ans=true;
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i]!=0)
                ans=false;
        }

        return ans;


        
    }
};
// @lc code=end

