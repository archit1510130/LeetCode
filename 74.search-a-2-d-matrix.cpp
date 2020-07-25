class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int n=matrix.size();
        
        if(n==0)return false;
        int m=matrix[0].size();
        if(m==0)return false;
        
        int targetrow=-1;
        for(int i=0;i<n;i++)
        {
            int first=matrix[i][0];
            int last=matrix[i][m-1];
            
            if(target>=first and target<=last)
                targetrow=i;
        }
        
        if(targetrow==-1)
            return false;
        
        return binary_search(matrix[targetrow].begin(), matrix[targetrow].end(), target);
        
        
        
    }
};