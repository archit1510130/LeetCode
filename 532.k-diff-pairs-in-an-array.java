import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.print.DocFlavor.INPUT_STREAM;

/*
 * @lc app=leetcode id=532 lang=java
 *
 * [532] K-diff Pairs in an Array
 */

// @lc code=start
class Solution {
    public int findPairs(int[] nums, int k) {

        if(k<0) 
        return 0;

        Map<Integer,Integer> map=new HashMap<>();

        for(int i:nums)
            map.put(i,map.getOrDefault(i, 0)+1);
        int ans=0;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (k == 0) {
                //count how many elements in the array that appear more than twice.
                if (entry.getValue() >= 2) {
                    ans++;
                } 
            } else {
                if (map.containsKey(entry.getKey() + k)) {
                    ans++;
                }
            }
        }

        return ans;
        
    }
}
// @lc code=end

