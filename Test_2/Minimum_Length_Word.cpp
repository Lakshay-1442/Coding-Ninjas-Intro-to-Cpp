/*

Given a string S (that can contain multiple words), you need to find the word which has minimum length.
Note : If multiple words are of same length, then answer will be first minimum length word in the string.
Words are seperated by single space only.
Input Format :
String S
Output Format :
Minimum length word
Constraints :
1 <= Length of String S <= 10^5
Sample Input 1 :
this is test string
Sample Output 1 :
is
Sample Input 2 :
abc de ghihjk a uvw h j
Sample Output 2 :
a

*/



/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/


void minLengthWord(char input[], char output[]){
    
    int length = 0;
    
    for (int i=0; input[i] != '\0'; i++)
    {
        length++;
    }
    
    int count = 0;
    int min = 100000000;
    int temp = 0;
    
    for (int i=0; i<=length; i++)
    {
        if (input[i] == ' ' || input[i] == '\0')
        {
            if (min > count)
            {
                min = count;
                temp = i;
            }
            
            count = 0;
        }
        
        else
        {
            count++;
        }
    }
    
    int flag;
    
    if (min >= flag)
    {
        flag = min - temp;
    }
    
    else
    {
        flag = temp - min;
    }

    
    int z = 0;
    
    for (int i=flag; i<temp; i++)
    {
        output[z] = input[i];
        z++;
    }

}


#include<iostream>
using namespace std;


int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}