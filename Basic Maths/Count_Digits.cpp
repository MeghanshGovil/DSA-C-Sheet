/*
Q-> Count Digits
Problem Link -> https://practice.geeksforgeeks.org/problems/count-digits5716/1
*/
Ans-> class Solution {
public:
    int evenlyDivides(int N){
        int i;
        int temp = N;
        set<int> s;
        
        while(temp != 0)
        {
            i = temp % 10;
            if(i != 0 && N % i == 0)  
            {
                s.insert(i);
            }
            temp = temp / 10;  
        }
        return s.size();
    }
};