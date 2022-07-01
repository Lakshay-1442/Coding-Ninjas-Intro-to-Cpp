
/*
    Print the following pattern for the given N number of rows.
    Pattern for N = 4

    4444
    333
    22
    1

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
    int temp = n;
    
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i+1; j++)
        {
            cout << temp;
        }
        cout << endl;
        temp--;
    }
    return 0;   
}