/*
 * @lc app=leetcode id=890 lang=cpp
 *
 * [890] Find and Replace Pattern
 */

// @lc code=start
// You have a list of words and a pattern, and you want to know which words in words matches the pattern.

// A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.

// (Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.)

// Return a list of the words in words that match the given pattern. 

// You may return the answer in any order.

 

// Example 1:

// Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
// Output: ["mee","aqq"]
// Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
// "ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation,
// since a and b map to the same letter.




class Solution {
public:
    bool match(string word,string par)
    {
        unordered_map<char,char>h1;
        unordered_map<char,char>h2;

        for(int i=0;i<word.length();i++)
        {
            if(h1.find(word[i])==h1.end())
                h1[word[i]]=par[i];

            if(h2.find(par[i])==h2.end())
                h2[par[i]]=word[i];

            
            if (h1[word[i]]!=par[i] || h2[par[i]]!=word[i])
                return false;
        }
        return true;
    }



    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        vector<string>ans;
        
        for(int i=0;i<words.size();i++)
        {
            if(match(words[i],pattern))
            {
                ans.push_back(words[i]);
            }
        }
        return ans;

        // pattern abbb
        // word mees aqqs

        // h1-> a->m    m->a
        //     b->e    




        
    }
};
// @lc code=end

