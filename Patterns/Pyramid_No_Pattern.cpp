/*

Print the following pattern for the given number of rows.
Pattern for N = 4

   1
  212
 32123
4321234

Input format : N (Total no. of rows)

Output format : Pattern in N lines

*/



#include<iostream>
using namespace std;

int main(){

  // Write your code here
    
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
                temp--;
            }
            else
            {
                cout << " ";
            }
        }

        int temp1 = 2;

        for (int k=1; k<n; k++)
        {
            if (k < i)
            {
                cout << temp1;
                temp1++;
            }
        }
        cout << endl;
    }
    return 0;  
}