/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
public:

    void combine(vector<vector<int>>&ans,vector<int>temp,int st,int n,int k)
    {
        if(k==0)
        {
            ans.push_back(temp);
            return;
        }
    

    for(int i=st;i<=n;i++)
    {
        temp.push_back(i);
        combine(ans,temp,i+1,n,k-1);
        temp.pop_back();
    }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;

        combine(ans,temp,1,n,k);
        return ans;
        
    }
};
// @lc code=end

