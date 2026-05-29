/*

Problem 132

Description:
Creates a new string
by removing the first letter
from every word
while keeping spaces.

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
        // not first letter 
 
        if(i != 0 && X[i - 1] != ' ') 
        { 
            Y[j] = X[i]; 
 
            j++; 
        } 
 
        // copy spaces 
 
        if(X[i] == ' ') 
        { 
            Y[j] = ' '; 
 
            j++; 
        } 
    } 
 
    Y[j] = '\0'; 
} 
 
int main() 
{ 
    char X[200]; 
 
    char Y[200]; 
 
    gets(X); 
 
    solve(X,Y); 
 
    cout << Y; 
 
    return 0; 
}