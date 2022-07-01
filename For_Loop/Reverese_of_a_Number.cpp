/*

Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. 
For e.g., reverse of 10400 will be 401 instead of 00401.

Input format :
Integer N

Output format :
Corresponding reverse number

*/



#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int n, res, flag = 0;
    cin >> n;
    
    if (n == 0)
    {
        cout << 0;
    }
    
    else
    {
        while (n > 0)
    	{
            res = n % 10;

            n = n / 10;

            if (res != 0)
            {
                cout << res;
                flag = 1;
            }

            else if (res == 0 && flag == 1)
            {
                cout << res;
            }
    	}
        
    }
    
    return 0;
	
}