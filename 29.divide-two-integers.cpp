/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
class Solution {
public:
    int divide(int dividend, int divisor) {
        // Divisor is one
        if(divisor == 1){
            return(dividend);
        }
        // Divisor is negative one
        else if(divisor == -1){
            // Positive dividend
            if(dividend > 0){
                // Int limit exceeded
                if(dividend == INT_MAX){
                    return(INT_MAX);
                }
                else{

                }
            }
            // Negative dividend
            else{
                // Int limit exceeded
                if(dividend == INT_MIN){
                    return(INT_MIN);
                }
                else{
                    
                }
            }
        }
    }
};
// @lc code=end

