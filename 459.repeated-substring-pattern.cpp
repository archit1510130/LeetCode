
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        if(s.size()==0)
            return true;
        if(s.size()==1)
            return false;
        int m=s.size()/2;
        
        
        int f=0;
        
        
        for(int i=1;i<=m;i++)
        {
            string ss=s.substr(0,i);
            
            for(int j=0;j<s.size();j+=i)
            {
                if(s.substr(j,i)==ss)
                {
                    f=1;
                    
                }
                else
                {
                    f=0;
                    break;
                }
            }
            
            if(f==1)
                return true;
        }
        
        return f==1;
        
    }
};