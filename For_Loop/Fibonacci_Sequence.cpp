#include<iostream>
using namespace std;



int main(){
    //Write your code here.
    
    int n;
    cin >> n;
    int n1 = 1, n2 = 1, n3, flag = 0;
    
    for (int i=3; i<=n; i++)
    {
        n3 = n1 + n2;
        
        n1 = n2;
        n2 = n3;
        flag = 1;
    }
    
    if (flag == 0)
    {
        cout << 1;
    }
    
    else 
    {
        cout << n3;
    }
        
    return 0;
}
