/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for (int i = 0; i < s.length(); i++){
            // Received I
            if(s.at(i)=='I'){
                if(i < s.length()-1){
                    // Next received V
                    if(s.at(i+1)=='V'){
                        num += 4;
                        i++;
                    }
                    // Next received X
                    else if(s.at(i+1)=='X'){
                        num += 9;
                        i++;
                    }
                    else{
                        num += 1;
                    }
                }
                else{
                    num += 1;
                }
            }
            // Received V
            else if(s.at(i)=='V'){
                num += 5;
            }
            // Received X
            else if(s.at(i)=='X'){
                if(i < s.length()-1){
                    // Next received L
                    if(s.at(i+1)=='L'){
                        num += 40;
                        i++;
                    }
                    // Next received C
                    else if(s.at(i+1)=='C'){
                        num += 90;
                        i++;
                    }
                    else{
                        num += 10;
                    }
                }
                else{
                    num += 10;
                }
            }
            // Received L
            else if(s.at(i)=='L'){
                num += 50;
            }
            // Received C
            else if(s.at(i)=='C'){
                if(i < s.length()-1){
                    // Next received D
                    if(s.at(i+1)=='D'){
                        num += 400;
                        i++;
                    }
                    // Next received M
                    else if(s.at(i+1)=='M'){
                        num += 900;
                        i++;
                    }
                    else{
                        num += 100;
                    }
                }
                else{
                    num += 100;
                }
            }
            // Received D
            else if(s.at(i)=='D'){
                num += 500;
            }
            // Received M
            else if(s.at(i)=='M'){
                num += 1000;
            }
        }
        return(num);
    }
};
// @lc code=end

