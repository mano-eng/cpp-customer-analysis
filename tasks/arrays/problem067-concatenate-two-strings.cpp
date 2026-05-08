/* 
Problem 067

Description:
Concatenates two strings by adding the second string 
to the end of the first string with a space between them.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[300]; 
    char Y[300]; 
 
    gets(X); 
    gets(Y); 
 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    X[len] = ' '; 
    len++; 
 
    int j = 0; 
 
    while(Y[j] != '\0') 
    { 
        X[len] = Y[j]; 
 
        len++; 
        j++; 
    } 
 
    X[len] = '\0'; 
 
    cout << X; 
 
    return 0; 
}