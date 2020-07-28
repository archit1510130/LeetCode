class Solution {
public:
    int getSum(vector<int>& arr, int m) {
        int sum = 0;
        for (auto i : arr) sum += min(i, m);
        return sum;
    }
    int findBestValue(vector<int>& arr, int target) {
        
        
        int n=arr.size();
        
        sort(arr.begin(),arr.end());
        
        int low=0;
        int high=arr[n-1];
        
        
        while(low<high)
        {
            int mid=(low+high)/2;
            int tempSum=getSum(arr,mid);
            
            if(tempSum>target)
                high=mid;
            
            else
                low=mid+1;
            
        }
        cout<<low<<endl;
        int ans=low;
        if(abs(getSum(arr,low-1)-target)<=abs(getSum(arr,low)-target))
           ans=low-1;
           
           return ans;
        
    }
};