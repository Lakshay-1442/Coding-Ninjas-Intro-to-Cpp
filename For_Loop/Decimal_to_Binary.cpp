/*

Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number 
can exceed the integer range. So you may want to take the answer as long for CPP 
and Java.


Note for C++ coders: Do not use the inbuilt implementation of "pow" function. 
The implementation of that function is done for 'double's and it may fail when 
used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to 
work for non-float data types.


Input format :
Integer N

Output format :
Corresponding Binary number (long)

*/



#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int n, res, count = 1;
    cin >> n;
    int arr[32];
    
    if (n == 0)
    {
        cout << 0;
    }
    
    else
    {
        while (n >= 1)
        {
            res = n % 2;

            n = n / 2;

            arr[count] = res;

            count ++;

            if (n == 1)
            {
                arr[count] = 1;
                break;
            }
            //count++;

        }

        //int arrSize = sizeof(arr)/sizeof(arr[0]);

        for (int i=count; i>0; i--)
        {
            cout << arr[i];
        }

    }
    
    return 0;
        
	
}