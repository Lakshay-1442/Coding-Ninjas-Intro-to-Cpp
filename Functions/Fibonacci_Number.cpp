/*

Given a number N, figure out if it is a member of fibonacci series or not. 
Return true if the number is member of fibonacci series else false.

Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1

Input Format :
Integer N

Output Format :
true or false

*/


#include<iostream>
using namespace std;

bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */
    
    int n0 = 1, n1 = 1, res;
    
    if (n == 0 || n == 1)
    {
        return true;
    }
    
    for (int i=2; i<=n; i++)
    {
        res = n0 + n1;
        
        n0 = n1;
        n1 = res;
        
        if (n == res)
        {
            return true;
        }
    }
    
    return false;


}


int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}