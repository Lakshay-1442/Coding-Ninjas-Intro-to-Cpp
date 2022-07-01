/*

For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.
Input Format:
The first line of input contains a string without any leading and trailing spaces, representing the first string 'str1'.

The second line of input contains a string without any leading and trailing spaces, representing the second string 'str2'.
Note:
All the characters in the input strings would be in lower case.
Output Format:
The only line of output prints either 'true' or 'false', denoting whether the two strings are a permutation of each other or not.

You are not required to print anything. It has already been taken care of. Just implement the function. 
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
abcde
baedc
Sample Output 1:
true
Sample Input 2:
abc
cbd
Sample Output 2:
false

*/



#include <stdlib.h>
#include <algorithm>

#define NO_OF_CHARS 256

bool isPermutation(char input1[], char input2[]) {
    
    // Create a count array and initialize all values as 0.
    
	int hash[NO_OF_CHARS] = { 0 };
    int i;

    int n1 = strlen(input1);
    int n2 = strlen(input2);
    // If length of both strings is not same, then they cannot be anagram.
    if (n1 != n2){
       return false;
    }

    /*
       For each character in input strings, 
       increment count in the corresponding count array.
    */
    for (i = 0; i < n1; i++){
        hash[input1[i]]++;
        hash[input2[i]]--;
    }

    // Check if all values in hash array are 0.
    for (i = 0; i < NO_OF_CHARS; i++){
        if (hash[i]){
            return false;
        }
    }
    return true;
    /*int length1 = strlen(input1);
    int length2 = strlen(input2);
    
    int temp1;
    
    if (length1 != length2)
    {
        return false;
    }
    
    sort(input1.begin(), input1.end());
    sort(input2.begin(), input2.end());
    */
    
    /*for (int i=0; i<length1-1; i++)
    {
        for (int j=0; j<length1-i-1; j++)
        {
            if (input1[j] > input1[j+1])
            {
                temp1 = input1[j];
                input1[j] = input1[j+1];
                input1[j+1] = temp1;
            }
        }
    }
    
    int temp2;
    
    for (int i=0; i<length2-1; i++)
    {
        for (int j=0; j<length2-i-1; j++)
        {
            if (input2[j] > input2[j+1])
            {
                temp2 = input2[j];
                input2[j] = input2[j+1];
                input2[j+1] = temp2;
            }
        }
    }*/
    
    
    /*for (int i=0; i<length1; i++)
    {
        if (input1[i] != input2[i])
        {
            return false;
        }
    }
    
    return true;*/
}


#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}