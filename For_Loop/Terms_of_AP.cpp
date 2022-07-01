/*

Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

Input format :
Integer x

Output format :
Terms of series (separated by space)

*/



#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int x, res;
    cin >> x;
    
    for (int i=1; i<=x; i++)
    {
        res = 3*i + 2;
        
        if (res % 4 == 0)
        {
            x = x + 1;
            continue;
        }
        
        else 
        {
            cout << res << " ";
        }
    }
    
    return 0;
    	
}