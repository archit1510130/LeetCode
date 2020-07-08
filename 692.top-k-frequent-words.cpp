class Solution {
public:
    
    struct compare{
        
        public: 
        int operator()(const pair<string,int>& p1, const pair<string,int>& p2) 
         { 
            if(p1.second==p2.second)
                return p1.first > p2.first;
            
             
        
        return p1.second <p2.second;
        }
        
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        
        map<string,int>count;
        vector<string>ans;
        
       priority_queue<pair<string,int>,vector<pair<string,int>>,compare> minHeap;
        for(auto word:words)
            count[word]++;
        
        
        for(auto &word:count)
        {
            minHeap.push({word.first,word.second});
            
        }
        
        
        while(k--)
        {
            ans.push_back(minHeap.top().first);
            minHeap.pop();
        }
        
        
        return ans;
        
        
        

        
    }
};