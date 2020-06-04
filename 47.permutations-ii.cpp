/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
 */

// @lc code=start
class Solution {
public:
     void find_permutations(vector<int>&nums,int index,int size,vector<vector<int>>&ans)
    {
        if(size==index)
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i=index;i<size;i++)
        {
            int f=1;
            for(int j=index;j<i;j++)
            {
                if(nums[j]==nums[i])
                    f=0;
            }
            if(f)
            {
            swap(nums[i],nums[index]);
            find_permutations(nums,index+1,size,ans);
            swap(nums[i],nums[index]);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
            // you need to retrun all possible permutaions
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int index=0;
        vector<int>arr;
        vector<vector<int>>ans;
        
        find_permutations(nums,index,size,ans);
        return ans;
        
        
    }
};
// @lc code=end

