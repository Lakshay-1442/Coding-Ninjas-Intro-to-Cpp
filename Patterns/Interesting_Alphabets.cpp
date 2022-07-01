#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */

    //      n = 5
    //              E
    //              DE
    //              CDE
    //              BCDE
    //              ABCDE
    
    
    int n;
    cin >> n;
    
    for (int i=1; i<=n; i++)
    {
        char alpha = 'A' + n - i;
        
        for (int j=1; j<=i; j++)
        {
            cout << alpha;
            alpha = alpha + 1;
        }
        cout << endl;
    }
    return 0;   
}
