class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size()<=2)return ans; 
        
        sort(nums.begin(),nums.end());
        
        
        
        for(int i=0;i<=nums.size()-3;i++)
        {
            
            if(i==0 || nums[i]>nums[i-1])
            {
                //cout<<nums[i]<<"in main Loop"<<endl;
                
                int st=i+1;
                int end=nums.size()-1;
                while(st<end)
                {
                    if(nums[i]+nums[st]+nums[end]==0)
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[st]);
                        temp.push_back(nums[end]);
                        ans.push_back(temp);  
                    }
                        
                    if(nums[i]+nums[st]+nums[end]<0)
                    {
                        int curSt=st;
                        while(st<end and nums[st]==nums[curSt])
                            {
                                //cout<<nums[st]<<endl;
                                st++;
                            }
                        }
                        else
                        {
                            int curend=end;
                            while(end>st and nums[curend]==nums[end])
                                end--;
                        }
                    
                        
                        
                }
                
                
                
                
                
                
            }
            
            
            
            
        }
        return ans;
        
        
    }
};