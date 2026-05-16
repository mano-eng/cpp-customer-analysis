/* 
Problem 098

Description:
Concatenates the second string
to the end of the first string.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[300]; 
    char Y[300]; 
 
    gets_s(X, 300); 
    gets_s(Y, 300); 
 
    // calculate length of X 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    // copy Y into X 
    int i = 0; 
 
    while(Y[i] != '\0') 
    { 
        X[len] = Y[i]; 

        len++; 
        i++; 
    } 
 
    X[len] = '\0'; 
 
    cout << X; 
 
    return 0; 
}