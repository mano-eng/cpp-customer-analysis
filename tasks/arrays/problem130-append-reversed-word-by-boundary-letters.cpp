/*

Problem 130

Description:
Searches for a word
starting and ending
with specific letters,
then appends its reversed form
to the end of the string.

*/

#include <iostream> 
using namespace std; 
 
void solve(char X[], char L1, char L2) 
{ 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    int start, end; 
 
    for(int i = 0; i < len; i++) 
    { 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            start = i; 
            end = start; 
 
            while(X[end] != ' ' && X[end] != '\0') 
            { 
                end++; 
            } 
 
            if(X[start] == L1 && X[end - 1] == L2) 
            { 
                // add space 
                X[len] = ' '; 
                len++; 
 
                // reverse copy at end 
                for(int j = end - 1; j >= start; j--) 
                { 
                    X[len] = X[j]; 
                    len++; 
                } 
 
                break; 
            } 
        } 
    } 
 
    X[len] = '\0'; 
} 
 
int main() 
{ 
    char X[200]; 
    char L1, L2; 
 
    gets(X); 
    cin >> L1 >> L2; 
 
    solve(X, L1, L2); 
 
    cout << X; 
 
    return 0; 
}