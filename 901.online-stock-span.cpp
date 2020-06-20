/*
 * @lc app=leetcode id=901 lang=cpp
 *
 * [901] Online Stock Span
 */

// @lc code=start
class StockSpanner {
public:
    stack<int>s;
    unordered_map<int,int>map;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int res=1;
        
        while(!s.empty() && s.top()<=price)
        {
            res=res+map[s.top()];
            s.pop();
        }
        
        s.push(price);
        map[price]=res;
        return res;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
// @lc code=end

