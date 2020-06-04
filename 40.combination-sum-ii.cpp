/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

class Solution {
public:
    void get_comb(vector<vector<int>>&ans,vector<int>temp,int ind,int target,vector<int>&nums)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        if(target<0)
            return;
        
        
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind and nums[i]==nums[i-1])
                continue;
            int curr=nums[i];
            temp.push_back(curr);
            get_comb(ans,temp,i+1,target-curr,nums);
            temp.pop_back();
        }

        


    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());

        get_comb(ans,temp,0,target,candidates);

        return ans;

        
    }
};
// @lc code=end

