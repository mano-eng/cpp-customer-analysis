/* 
Problem 077

Description:
Finds and prints the longest word in the string.
(Method 2)
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
    char X[300]; 

    gets(X); 

    int len = 0; 

    while(X[len] != '\0') 
    { 
        len++; 
    } 

    int maxLen = -999999; 
    int maxStart = 0; 
    int start = 0; 
    int end = 0; 

    while(end <= len) 
    { 
        if(X[end] == ' ' || X[end] == '\0') 
        { 
            int wordLen = end - start; 

            if(wordLen > maxLen) 
            { 
                maxLen = wordLen; 
                maxStart = start; 
            } 

            start = end + 1; 
        } 

        end++; 
    } 

    for(int i = maxStart; i < maxStart + maxLen; i++) 
    { 
        cout << X[i]; 
    } 

    return 0; 
}