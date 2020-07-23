class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
        
        int n=people.size();
        
        int st=0;
        int end=n-1;
        int ans=0;
        while(st<=end)
        {
            
            if(people[st]+people[end]<=limit)
            {
                st++;
                end--;
            }
            else
                end--;
            
            ans++;
            
        }
        
        return ans;
        
    }
};