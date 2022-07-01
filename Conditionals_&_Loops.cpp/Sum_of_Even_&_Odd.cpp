
/*
Write a program to input an integer N and print the sum of all its even digits 
and sum of all its odd digits separately.
Digits mean numbers, not the places! 
That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.

Input format :
 Integer N
 
Output format :
Sum_of_Even_Digits Sum_of_Odd_Digits

(Print first even sum and then odd sum separated by space)
*/


#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int n;
    cin >> n;
    
    int even = 0, odd = 0;
    
    int q = n;
    
    while (q>0)
    {
        int count = q % 10;
        
        if (count%2 == 0)
        {
            even = even + count; 
        }
        
        else
        {
            odd = odd + count;
        }
        
        q = q / 10;
    }
    
    cout << even << " " << odd;
    
    return 0;
	
}