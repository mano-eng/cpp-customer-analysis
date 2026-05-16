/* 
Problem 094

Description:
Copies words that start with two identical letters
into another string separated by spaces.
*/

#include <iostream> 
using namespace std; 
 
void solve(char X[], char Y[]) 
{ 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    int j = 0; 
 
    for(int i = 0; i < len; i++) 
    { 
        int start = i; 

        int end = start; 
 
        // move to end of word 
        while(X[end] != ' ' && X[end] != '\0') 
        { 
            end++; 
        } 
 
        // word starts with repeated letter 
        if(X[start] == X[start + 1]) 
        { 
            // copy word to Y 
            for(int k = start; k < end; k++) 
            { 
                Y[j] = X[k]; 

                j++; 
            } 
 
            // add space 
            Y[j] = ' '; 

            j++; 
        } 
 
        i = end; 
    } 
 
    // remove last space 
    if(j > 0) 
    { 
        j--; 
    } 
 
    Y[j] = '\0'; 
} 
 
int main() 
{ 
    char X[300]; 

    char Y[300]; 
 
    gets_s(X, 300); 
 
    solve(X, Y); 
 
    cout << Y; 
 
    return 0; 
}