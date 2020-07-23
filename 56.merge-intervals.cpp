class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        if(n==0)return intervals;
        
        sort(intervals.begin(),intervals.end());
        
        int index=0;
        intervals[index]=intervals[0];
        
        for(int i=1;i<n;i++)
        {
            if(min(intervals[index][1],intervals[i][0])>=max(intervals[index][0],intervals[i][0]))
            {
                intervals[index][0]=min(intervals[index][0],intervals[i][0]);
                
                intervals[index][1]=max(intervals[index][1],intervals[i][1]);
                
            }
            else
                intervals[++index]=intervals[i];
        }
        intervals.resize(index+1);
        
        return intervals;
        
        
        
        
        
    }
};