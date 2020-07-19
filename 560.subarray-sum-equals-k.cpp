class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        if(n==0)return 0;
        unordered_map<int,int>map;
        vector<int>prefix(n);
        prefix[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
           
        }
        
        
        int count=0;
        for(int i=0;i<prefix.size();i++)
        {
            
            if(prefix[i]==k )
            {
                count++;
            }
            
            if( map.find(prefix[i]-k)!=map.end())
                count+=map[prefix[i]-k];
            
             map[prefix[i]]++;;
            
        }
        return count;
        
        
        
        
    }
};