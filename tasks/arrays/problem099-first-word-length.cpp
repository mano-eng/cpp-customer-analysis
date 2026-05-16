/* 
Problem 099

Description:
Calculates the length
of the first word in a string.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[300]; 
 
    gets_s(X, 300); 
 
    int start = 0; 
    int end = start; 
 
    // move to end of first word 
    while(X[end] != ' ' && X[end] != '\0') 
    { 
        end++; 
    } 
 
    int wordLen = end - start; 
 
    cout << wordLen; 
 
    return 0; 
}