/*
 * @lc app=leetcode id=503 lang=cpp
 *
 * [503] Next Greater Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        stack<int>s;
        int n=nums.size();
        vector<int>output(n,-1);

        for(int i=0;i<2*n;i++)
        {

            while(!s.empty() && nums[s.top()]<nums[i%n])
            {
                int ind=s.top();
                s.pop();
                output[ind]=nums[i%n];

            }

            // we push in stack to considered for answer
            // after first traversel that means up to n we left with the element those dont have answers
            if(i<n)
            {
                s.push(i);
            }


        }
        return output;
        
    }
};
// @lc code=end

