/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {


        int st=0;
        int end=numbers.size()-1;
        vector<int>ans;
        while(st<end)
        {
            if(numbers[st]+numbers[end]==target)
            {
                ans.push_back(st+1);
                ans.push_back(end+1);
                break;

            }

            else
            {
                if(numbers[st]+numbers[end]<target)
                    st++;
                else
                {
                        end--;
                }
                
            }
           
            
        }
         return ans;

    }
        
    };
// @lc code=end

