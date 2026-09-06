class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        int revNum = 0;
        int copy = x;
        while(x != 0){
            int last_digit = x%10;
             x = x/10;
            revNum = (revNum*10) + last_digit;
        }
        if( revNum == copy){return true;}
        else {return false;}

        return revNum;
    }
};