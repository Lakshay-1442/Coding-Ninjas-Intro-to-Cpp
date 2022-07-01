/*

Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).

Input Format :
A stream of characters terminated by '$'

Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)

*/


#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    
    char c;
    int alpha = 0;
    int digits = 0;
    int spaces = 0;
    
    while (c != '$')
    {
        c = cin.get();
        
        if (c >= 97 && c <= 122)
        {
            alpha++;
        }
        
        else if (c >= 48 && c <= 57)
        {
            digits++;
        }
        
        else
        {
            spaces++;
        }
    }
    
    cout << alpha << " " << digits << " " << spaces-1;
    
    return 0;
  
}