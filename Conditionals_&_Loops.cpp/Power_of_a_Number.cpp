
/*
    Write a program to find x to the power n (i.e. x^n). Take x and n from the user. 
    You need to print the answer.

    Note : For this question, you can assume that 0 raised to the power of 0 is 1

    Input format :
    Two integers x and n (separated by space)

    Output Format :
    x^n (i.e. x raise to the power n)
*/


#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int x, n, result = 1;
    
    cin >> x >> n;
    
    if (x == 0 && n == 0)
    {
        cout << 1;
    }
    
        
    else if (x == 0)
    {
        cout << 0;
    }
    
    else if (n == 0)
    {
        cout << 1;
    }
    
    else if (x == 1)
    {
        cout << x;
    }
    
    else if (n == 1)
    {
        cout << x;
    }
    
    else
    {
        while (n>0)
        {
            result = result * x;
            n = n-1;
        }
        
        cout << result;
    }
    
    return 0;	
}