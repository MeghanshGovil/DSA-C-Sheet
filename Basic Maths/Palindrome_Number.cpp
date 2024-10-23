/*
Question -> Palindrome Number
Problem Link -> https://leetcode.com/problems/palindrome-number/description/
*/
Answer ->class Solution {
public:
    bool isPalindrome(int x) {
        int c=x;
        int rev=0;
        while(c>0){
            if((rev>INT_MAX/10) || (rev<INT_MIN/10))
            {
                return 0;
            }
            int remain=c%10;
            rev=rev*10+remain;
            c/=10;
        }
        if(rev==x){
        return true;
        }
        else return false;
    }
};
