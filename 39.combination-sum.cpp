/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void get_comb(vector<vector<int>>&ans,vector<int>temp,int ind,int target,vector<int>&nums)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        if(target<0 || ind>=nums.size())
            return;

        int curr=nums[ind];
        temp.push_back(curr);
        get_comb(ans,temp,ind,target-curr,nums);
        temp.pop_back();
        get_comb(ans,temp,ind+1,target,nums);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>>ans;
        vector<int>temp;

        get_comb(ans,temp,0,target,candidates);

        return ans;


        
    }
};
// @lc code=end

