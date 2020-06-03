/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:

 void get_subsets(vector<int>&A,vector<int>aux,int i,bool flag,vector<vector<int>>&ans)
{
    if(flag)ans.push_back(aux);
    if(i==A.size())
    {
        return ;
    }
    
    aux.push_back(A[i]);
    get_subsets(A,aux,i+1,true,ans);
    aux.pop_back();
    get_subsets(A,aux,i+1,false,ans);
    
}
    vector<vector<int>> subsets(vector<int>& A) {
        vector<vector<int>>ans ;
    
    vector<int> aux;
    int i=0;
    bool flag=true;
    
    int len=A.size();
    get_subsets(A,aux,i,flag,ans);
    return ans;
    }
};
// @lc code=end

