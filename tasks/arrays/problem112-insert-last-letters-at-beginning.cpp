/* 
Problem 112

Description:
Takes the last letter from every word
in the string and inserts them
at the beginning of the same string.
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
 
    // count words
    int words = 0; 

    for(int i = 0; i < len; i++) 
    { 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            words++; 
        } 
    } 
 
    // shift string right
    for(int i = len; i >= 0; i--) 
    { 
        X[i + words] = X[i]; 
    } 
 
    // insert last chars
    int pos = 0; 

    for(int i = words; i < len + words; i++) 
    { 
        if(X[i] == ' ') 
        { 
            X[pos] = X[i - 1]; 
            pos++; 
        } 

        // last word
        if(X[i + 1] == '\0') 
        { 
            X[pos] = X[i]; 
        } 
    } 
} 
 
int main() 
{ 
    char X[200]; 

    gets_s(X, 200); 
 
    solve(X); 
 
    cout << X; 
 
    return 0; 
}