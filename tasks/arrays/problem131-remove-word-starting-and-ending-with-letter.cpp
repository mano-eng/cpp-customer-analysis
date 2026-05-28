/*

Problem 131

Description:
Removes the first word
that starts and ends
with the given letter.

*/

#include <iostream> 
using namespace std; 
 
void solve(char X[], char L) 
{ 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    int start, end; 
 
    // find word 
 
    for(int i = 0; i < len; i++) 
    { 
        // beginning of word 
 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            start = i; 
 
            end = start; 
 
            while(X[end] != ' ' && X[end] != '\0') 
            { 
                end++; 
            } 
 
            // starts and ends with L 
 
            if(X[start] == L && X[end - 1] == L) 
            { 
                // shift left 
 
                for(int j = end; j <= len; j++) 
                { 
                    X[start] = X[j]; 
 
                    start++; 
                } 
 
                break; 
            } 
        } 
    } 
} 
 
int main() 
{ 
    char X[200]; 
 
    char L; 
 
    gets(X); 
 
    cin >> L; 
 
    solve(X,L); 
 
    cout << X; 
 
    return 0; 
}