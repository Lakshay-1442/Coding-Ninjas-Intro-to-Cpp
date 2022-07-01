
/*
    Print the following pattern
    Pattern for N = 4

    . . . * . . .
    . . * * * . .
    . * * * * * .
    * * * * * * *

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
        for (int j=1; j<=n; j++)
        {
            if (j > n-i)
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
    return 0;  
  
}