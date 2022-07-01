
/*
    Print the following pattern
    Pattern for N = 4

    . . . 1
    . . 2 3
    . 3 4 5
    4 5 6 7

    The dots represent spaces.

    Input Format :
    N (Total no. of rows)

    Output Format :
    Pattern in N lines
*/


#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    
    int n;
    cin >> n;
    
    for (int i=1; i<=n; i++)
    {
        int val = i;
        
        for (int j=1; j<=n; j++)
        {
            if (j <= n-i)
            {
                cout << " ";
            }
            
            else
            {
                cout << val;
                val = val + 1;
            }
            
        }
        cout << endl;
    }
    return 0;  
}