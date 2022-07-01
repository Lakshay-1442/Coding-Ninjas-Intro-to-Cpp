
/*
Print the following pattern for the given number of rows.
Note: N is always odd.

Pattern for N = 5

    . . *
    . * * * 
    * * * * * 
    . * * *
    . . *

The dots represent spaces.

Input format :
N (Total no. of rows and can only be odd)

Output format :
Pattern in N lines
*/


#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
    int n;
    cin >> n;
    
    for (int i=1; i<=(n+1)/2; i++)
    {
        for (int j=1; j<=(n+1)/2; j++)
        {
            if (j > ((n+1)/2)-i)
            {
                cout << "*";
            }
            
            else
            {
                cout << " ";
            }
        }
        
        for (int k=1; k<n; k++)
        {
            if (k < i)
            {
                cout << "*";
            }
        }
        
        cout << endl;
    }
    
    for (int i=1; i<(n+1)/2; i++)
    {
        for (int j=1; j<=(n+1)/2; j++)
        {
            if (j > i)
            {
                cout << "*";
            }
            
            else
            {
                cout << " ";
            }
        }
        
        for (int k=1; k<((n+1)/2)-i; k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;    
}