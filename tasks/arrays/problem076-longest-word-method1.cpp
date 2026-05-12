/* 
Problem 076

Description:
Finds and prints the longest word in the string.
(Method 1)
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
    char X[300]; 

    gets(X); 

    int len = 0; 

    while(X[len] != '\0') 
        len++; 

    int maxLen = 0; 
    int maxStart = 0; 

    for(int i = 0; i < len; i++) 
    { 
        if(i == 0 || X[i-1] == ' ') 
        { 
            int wordLen = 0; 

            while(X[i + wordLen] != ' ' && X[i + wordLen] != '\0') 
                wordLen++; 

            if(wordLen > maxLen) 
            { 
                maxLen = wordLen; 
                maxStart = i; 
            } 
        } 
    } 

    for(int i = maxStart; i < maxStart + maxLen; i++) 
        cout << X[i]; 

    return 0; 
}