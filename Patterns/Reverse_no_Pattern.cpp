#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    //      n = 4
    //              1
    //              21
    //              321
    //              4321
    
    int n;
    cin >> n;
    
    for (int i=1; i<=n; i++)
    {
        int temp = i;
        for (int j=1; j<=i; j++)
        {
            cout << temp;
            temp--;
        }
        cout << endl;
    }
    return 0;  
}


