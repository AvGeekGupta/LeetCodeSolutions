/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int place = 0;
        while (num>0) {
            int temp = num%10;
            if(temp==0);
            else if(temp<=3){
                for (int i = 0; i < temp; i++){
                    if(place==0)
                        ans = "I" + ans;
                    else if(place==1)
                        ans = "X" + ans;
                    else if(place==2)
                        ans = "C" + ans;
                    else
                        ans = "M" + ans;
                }
            }
            else if(temp==4){
                if(place==0)
                    ans = "IV" + ans;
                else if(place==1)
                    ans = "XL" + ans;
                else
                    ans = "CD" + ans;
            }
            else if(temp==5){
                if(place==0)
                    ans = "V" + ans;
                else if(place==1)
                    ans = "L" + ans;
                else
                    ans = "D" + ans;
            }
            else if(temp<=8){
                string t = "";
                if(place==0){
                    t = "V";
                    for (int i = 5; i < temp; i++)
                        t += "I";
                }
                else if(place==1){
                    t = "L";
                    for (int i = 5; i < temp; i++)
                        t += "X";
                }
                else{
                    t = "D";
                    for (int i = 5; i < temp; i++)
                        t += "C";
                }
                ans = t + ans;
            }
            else{
                if(place==0)
                    ans = "IX" + ans;
                else if(place==1)
                    ans = "XC" + ans;
                else
                    ans = "CM" + ans;
            }
            num /= 10;
            place++;
        }
        return(ans);
    }
};
// @lc code=end

