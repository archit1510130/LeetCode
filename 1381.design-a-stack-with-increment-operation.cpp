/*
 * @lc app=leetcode id=1381 lang=cpp
 *
 * [1381] Design a Stack With Increment Operation
 */

// @lc code=start
class CustomStack {
public:
    int n=10;
    stack<int>s;
    vector<int>dp;
    CustomStack(int maxSize) {
        n=maxSize;
        
      
        
    }
    
    void push(int x) {
        if(s.size()<n)
        {
            s.push(x);
            dp.push_back(0);
            
        }

        
    }
    
    int pop() {
        
        int i=s.size()-1;
        if(i<0)
            return -1;
        else
        {
            if(i>0)
                dp[i-1]+=dp[i];

            int res=s.top()+dp[i];
            s.pop();
            dp[i]=0;
            return res;
        }
        
        
    }
    
    void increment(int k, int val) {

        int i=min((int)s.size(),k)-1;
        if(i>=0)
        {
            dp[i]=dp[i]+val;

        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
// @lc code=end

