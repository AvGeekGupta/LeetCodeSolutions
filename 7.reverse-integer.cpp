/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
    int reversee(int num){
        int ans = 0;
        while(num>0){
            int t = num%10;
            ans = (ans*10) + t;
            num /= 10;
        }
        return ans;
    }
public:
    int reverse(int x) {
        int max[10] = {2, 1, 4, 7, 4, 4, 7, 4, 1, 2};
        string num = to_string(x);
        // Equal length
        if(num.size()==10){
            // Positive
            if(x>0){
                int temp = x, i = 0;
                while(temp>0){
                    int t = temp%10;
                    if(t>max[i]){
                        return(0);
                    }
                    else{
                        temp /= 10;
                        i++;
                    }
                }
                return(reversee(x));
            }
            // Negative
            else{

            }
        }
        // Small number
        else{
            // Positive
            if(x>0){
                return(reversee(x));
            }
            // Negative
            else{
                return(-1*(reversee(-1*x)));
            }
        }
    }
};
// @lc code=end

