/*

Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.

Input Format :
Integer N

Output Format :
Prime numbers in different lines

*/


#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    
    int n, flag = 0;
    cin >> n;
    
    if (n >= 2)
    {
        cout << 2 << endl;        
    }
    
    for (int i=2; i<=n; i++)
    {
        for (int j=2; j<=i; j++)
        {
            if (i == j)
            {
                break;
            }
            
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            
            else
            {
                flag = 1;
            }
        }
        
        if (flag == 1)
        {
            cout << i << endl;
        }
    }
    
    return 0;
  
}