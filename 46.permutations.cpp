/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
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
            swap(nums[i],nums[index]);
            find_permutations(nums,index+1,size,ans);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        // you need to retrun all possible permutaions
        int size=nums.size();
        int index=0;
        vector<int>arr;
        vector<vector<int>>ans;
        
        find_permutations(nums,index,size,ans);
        return ans;
        
        
        
    }
};
// @lc code=end

