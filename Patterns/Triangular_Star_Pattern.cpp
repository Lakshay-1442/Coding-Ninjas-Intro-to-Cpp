#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    //      n = 4
    //              *
    //              **
    //              ***
    //              ****
    
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    return 0;
  
}


