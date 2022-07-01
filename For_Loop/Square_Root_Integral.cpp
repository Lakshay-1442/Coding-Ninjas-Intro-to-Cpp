/*

Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.

Input format :
Integer N

Output Format :
Square root of N (integer part only)

*/



#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int n, i = 1;
    cin >> n;
    
    while (i * i <= n)
    {
        i++;
    }
    
    cout << i - 1;
    
    return 0;
}