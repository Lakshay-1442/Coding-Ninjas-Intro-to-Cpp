
/*

    Pattern for N = 4

    . . . 1 . . .
    . . 1 2 1 . .
    . 1 2 3 2 1 .
    1 2 3 4 3 2 1

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

        int temp1 = i-1;

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