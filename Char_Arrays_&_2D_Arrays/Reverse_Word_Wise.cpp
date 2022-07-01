/*

Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always

*/



void reverseStringWordWise(char input[]) {
    
    int length = 0;
    
    for (int i=0; input[i] != '\0'; i++)
    {
        length++;
    }
    
    char temp[length+1];
    int count = 0;
    
    for (int i=length; i>=0; i--)
    {
        if (input[i] == ' ')
        {
            for (int j=i+1; input[j] != '\0' && input[j] != ' '; j++)
            {
                temp[count] = input[j];
                count++;
            }
            
            temp[count] = ' ';
            count++;
        }
        
        else if (i == 0)
        {
            for (int j=i; input[j] != '\0' && input[j] != ' '; j++)
            {
                temp[count] = input[j];
                count++;
            }        
        }
    }
    
    for (int i=0; i<length; i++)
    {
        input[i] = temp[i];
    }
}


#include <iostream>
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}