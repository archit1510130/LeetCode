import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

/*
 * @lc app=leetcode id=322 lang=java
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution {
    public int coinChange(int[] coins, int amount) {
        if (coins == null || coins.length == 0)
        return -1;

        if (amount <= 0)
            return 0;

        int dp[] = new int[amount + 1];
        for (int i = 1; i < dp.length; i++) {
            dp[i] = 100000;
         }

         for(int i:coins)
         {
             if(i<=amount)
             dp[i]=1;
         }

         for(int j:coins)
         {
             for(int i=1;i<=amount;i++)
             {
                 if(i>=j)
                 {
                     dp[i]=Math.min(dp[i-j]+1,dp[i]);
                 }
             }
         }

         return dp[amount]==100000?-1:dp[amount];

      

        
        
    }
}
// @lc code=end

