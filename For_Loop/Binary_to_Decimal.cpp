/*

Binary to decimal
Send Feedback
Given a binary number as an integer N, convert it into decimal and print.

Input format :
An integer N in the Binary Format

Output format :
Corresponding Decimal number (as integer)

*/



#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
    
    int n, res, count = 0, ans = 0;
    cin >> n;
    
    while (n > 0)
    {
        res = n % 10;
        
        ans = ans + (res * pow(2, count));
        
        n = n / 10;
        
        count++;
    }
    
    cout << ans;
	
    return 0;
}