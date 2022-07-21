/*
 * @lc app=leetcode id=420 lang=cpp
 *
 * [420] Strong Password Checker
 */
// @lc code=start
class Solution {
public:
    int strongPasswordChecker(string password) {
        int minLenFlag=0, maxLenFlag=0, scFlag=0, lcFlag=0, ucFlag=0, digitFlag=0, ccFlag=0;
        // Checking for Lenght
        if(password.length() <= 6){
            minLenFlag = 1;
        }
        else if(password.length() >= 20){
            maxLenFlag = 0;
        }
        for (int i = 0; i < password.length(); i++){
            // Checking for special character
            if(!isalnum(password.at(i))){
                scFlag = 1;
                break;
            }
            // Checking for Digit 
            else if(isdigit(password.at(i))){
                digitFlag = 1;
                break;
            }
            // Checking for lowercase
            else if(islower(password.at(i))){
                lcFlag = 1;
                break;
            }
            // Checking for uppercase
            else if(isupper(password.at(i))){
                ucFlag = 1;
                break;
            }
        }
        // Checking for continous characters
        char temp = password.at(0);
        int cFlag = 0;
        for (int i = 1; i < password.length(); i++){
            if(temp == password.at(i)){
                cFlag++;
            }
            else{
                cFlag = 0;
            }
            if(cFlag >= 3){
                ccFlag++;
            }
        }
        // Correcting the code
        
        // Returning result
        if (!minLenFlag && !maxLenFlag && !scFlag && !lcFlag && !ucFlag && !digitFlag && !ccFlag){
            return(0);
        }
        else{
            return(1);
        }
    }
};
// @lc code=end

