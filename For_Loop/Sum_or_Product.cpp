/*

Write a program that asks the user for a number N and a choice C. And then give them the 
possibility to choose between computing the sum and computing the product of all integers 
in the range 1 to N (both inclusive).

If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)

Input format :
Line 1 : Integer N
Line 2 : Choice C

Output Format :
 Sum or product according to user's choice

 */



#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int n, c, sum = 0, product = 1;
    cin >> n >> c;
    
    for (int i=1; i<=n; i++)
    {
        if (c == 1)
        {
            sum = sum + i;
        }
        
        else if (c == 2)
        {
            product = product * i;
        }
        
        else 
        {
            cout << -1;
            break;
        }
    }
    
    if (c == 1)
    {
        cout << sum;
    }
    
    else if (c == 2)
    {
        cout << product;
    }
    
    return 0;	
}