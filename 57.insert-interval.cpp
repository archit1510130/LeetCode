class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        
        int n=intervals.size();
        vector<vector<int>>res;
        intervals.push_back(newInterval);
        
        sort(intervals.begin(),intervals.end());
        
        res.push_back(intervals[0]);
        
        
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=res[res.size()-1][1])// merge it
            {
                res[res.size()-1][1]=max(res[res.size()-1][1],intervals[i][1]);
            }
            else
                res.push_back(intervals[i]);
        }
        
        return res;
        
        
        
        
        

        return intervals;
            
        
        
    }
};