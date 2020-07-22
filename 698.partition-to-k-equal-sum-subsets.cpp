class Solution {
public:
   bool isPossible(int st,int current,vector<bool>status,vector<int>&nums,int k,int target)
   {
       if(k<=1)
           return true;
       if(current==target)
       {
           return isPossible(0,0,status,nums,k-1,target);
       }
       for(int i=st;i<nums.size();i++)
       {
           if(!status[i])
           {
               status[i]=true;
        if(isPossible(i+1,current+nums[i],status,nums,k,target))
                   return true;
               
               status[i]=false;
           }
           
       }
       
       return false;
   }
    
    
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        cout<<sum/k<<endl;
        
        if(sum%k!=0)
        {
            cout<<"IN"<<endl;
            return false;
        }
        
        vector<bool>status(nums.size());
        fill(status.begin(),status.end(),false);
        
        
        return isPossible(0,0,status,nums,k,sum/k);
    }
};