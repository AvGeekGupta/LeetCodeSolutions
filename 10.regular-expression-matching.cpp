/*
 * @lc app=leetcode id=10 lang=cpp
 *
 * [10] Regular Expression Matching
 */

// @lc code=start
class Solution {
public:
    bool isMatch(string s, string p) {
        // Single character after anything
        if(p.find('.') != string::npos){
            return(true);
        }
        // Same character rpeat
        else if(p.find('*') != string::npos){
            return(true);
        }
        // Given string
        else{
            if (s.find(" "+p+" ") != string::npos){
                return(true);
            }
            else{
                return(false);
            }
            
        }
    }
};
// @lc code=end

