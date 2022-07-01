/*

Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi

*/


void trimSpaces(char input[]) {
    
    int length, flag = 0, count = 0;
    
    for (int i=0; input[i] != '\0'; i++)
    {
        length++;
    }
    
    for (int i=0; i<length-1; i++)
    {
        if (input[i] == ' ')
        {
            count++;
            
            for (int j=i; j<length-1; j++)
            {
                input[j] = input[j+1];                
            }
            
            i--;
        }        
    }
    
    int temp = length - count;
    input[temp] = '\0';
    
}


#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

