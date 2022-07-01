
/*
    Print the following pattern for the given number of rows.
    Pattern for N = 4

    . . . 1 . . .
    . . 2 3 2 . .
    . 3 4 5 4 3 .
    4 5 6 7 6 5 4

    The dots represent spaces.

    Input format :
    Integer N (Total no. of rows)

    Output format :
    Pattern in N lines
*/


#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
    int n;
    cin >> n;
    
    for (int i=1; i<=n; i++)
    {
        int temp = i;
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
        
        int temp1 = temp - 2;

        for (int k=1; k<n; k++)
        {
            if (k < i)
            {
                cout << temp1;
                temp1--;
            }
        }
        cout << endl;
    }
    return 0;  
    
}