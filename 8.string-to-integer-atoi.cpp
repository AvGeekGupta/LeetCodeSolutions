/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string s) {
        bool isNumberRec = false; //true if number not received
        bool isPositive = true;  //true if positive
        bool isSignRec = false; //true if sign not received
        long long int ans = 0;
        for (int i = 0; i < s.length(); i++){
            // If number is received
            if(isdigit(s.at(i))){
                isNumberRec = true;
                ans = ans*10 + (int(s.at(i))-48);
                if(ans >= INT_MAX && isPositive){
                    return(INT_MAX);
                }
                else if(ans > INT_MAX && !isPositive){
                    return(INT_MIN);
                }
            }
            // If number not received
            else{
                // If character is received
                if((s.at(i)>='A'&&s.at(i)<='Z')||(s.at(i)>='a'&&s.at(i)<='z')){
                    break;
                }
                else if(s.at(i)=='.'){
                    break;
                }
                // If space is received
                else if(s.at(i)==' ' && (isNumberRec || isSignRec)){
                    break;
                }
                // If positive sign received
                else if(s.at(i)=='+'){
                    if(isNumberRec){
                        break;
                    }
                    else if(isSignRec){
                        break;
                    }
                    else{
                        isSignRec = true;
                    }
                }
                // If negative sign received
                else if(s.at(i)=='-'){
                    if(isNumberRec){
                        break;
                    }
                    else if(isSignRec){
                        break;
                    }
                    else{
                        isSignRec = true;
                        isPositive = false;
                    }
                }
                else if(isNumberRec || isSignRec){
                    break;
                }
            }
        }
        if(!isPositive)
            ans *= -1;
        return(int(ans));
    }
};
// @lc code=end

