/* 
Problem 093

Description:
Finds words that start with "un",
then appends the first half of each word
to the end of the string.
*/

#include <iostream> 
using namespace std; 
 
void solve(char X[]) 
{ 
    // calculate length 
    int len = 0; 

    while(X[len] != '\0') 
    { 
        len++; 
    } 

    for(int i = 0; i < len; i++) 
    { 
        // word starts with "un" 
        if((i == 0 || X[i-1] == ' ') && X[i] == 'u' && X[i+1] == 'n') 
        { 
            int start = i; 
            int end = start; 

            // move to end of word 
            while(X[end] != ' ' && X[end] != '\0') 
            { 
                end++; 
            } 

            int wordLen = end - start; 
            int half = wordLen / 2; 

            // copy first half to end of string 
            for(int j = 0; j < half; j++) 
            { 
                X[len] = X[start + j]; 
                len++; 
            } 
        } 
    } 

    X[len] = '\0'; 
} 
 
int main() 
{ 
    char X[300]; 

    gets_s(X, 300); 

    solve(X); 

    cout << X; 

    return 0; 
}