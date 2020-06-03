/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
    void get_subsets(vector<vector<int>>&ans,vector<int>&nums,vector<int>temp,int ind)
    {
        ans.push_back(temp);

        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind and nums[i]==nums[i-1])
                continue;
            temp.push_back(nums[i]);
            get_subsets(ans,nums,temp,i+1);
            temp.pop_back();
        }


    }



    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        // then we will miss if we remove duplicates 
        int n=nums.size();
        sort(nums.begin(),nums.end());
       

        vector<vector<int>>ans;
        vector<int>temp;
         get_subsets(ans,nums,temp,0);
return ans;


        
    }
};
// @lc code=end

