/*
 * @lc app=leetcode id=1247 lang=cpp
 *
 * [1247] Minimum Swaps to Make Strings Equal
 */

// @lc code=start


// You are given two strings s1 and s2 of equal length consisting of letters "x" and "y" only. Your task is to make these two strings equal to each other. You can swap any two characters that belong to different strings, which means: swap s1[i] and s2[j].

// Return the minimum number of swaps required to make s1 and s2 equal, or return -1 if it is impossible to do so.


// Input: s1 = "xy", s2 = "yx"
// Output: 2
// Explanation: 
// Swap s1[0] and s2[0], s1 = "yy", s2 = "xx".
// Swap s1[0] and s2[1], s1 = "xy", s2 = "xy".
// Note that you can't swap s1[0] and s1[1] to make s1 equal to "yx", cause we can only swap chars in different strings.

class Solution {
public:
    int minimumSwap(string s1, string s2) {

        
    int var1=0;  // for count of x/y
    int var2=0;  // for count of y/x
    int count=0;
    for(int i=0;i<s1.size();i++)
    {
              if(s1[i]==s2[i])
              continue;
          
              else if(s1[i]=='x' and s2[i]=='y')
              {
                  var1++;
              }
              else
              {
                  var2++;
              }
          
      }

      int ans=var1/2+var2/2;
      var1=var1%2;
      var2=var2%2;
      if(var1==1 and var2==1)
        return ans+2;
    if(var1==1 || var2==1)
        return -1;
        return ans;


        
    }
};
// @lc code=end

