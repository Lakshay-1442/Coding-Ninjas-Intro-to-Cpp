
/*
    Print the following pattern for the given N number of rows.
    Pattern for N = 4

    . . . 1
    . . 1 2
    . 1 2 3
    1 2 3 4

    The dots represent spaces.

    Input format :
    Integer N (Total no. of rows)

    Output format :
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
        int temp = 1;
        for (int j=1; j<=n; j++)
        {
            if (j > n-i)
            {
                cout << temp;
                temp++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;  
}