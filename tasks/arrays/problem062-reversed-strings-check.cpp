/* 
Problem 062

Description:
Checks whether the second string is the reverse 
of the first string.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[200], Y[200]; 
 
    gets(X); 
    gets(Y); 
 
    int lenX = 0, lenY = 0; 
 
    while(X[lenX] != '\0') 
        lenX++; 
 
    while(Y[lenY] != '\0') 
        lenY++; 
 
    if(lenX != lenY) 
    { 
        cout << "No"; 
        return 0; 
    } 
 
    int ct = 0; 
 
    for(int i = 0; i < lenX; i++) 
    { 
        if(X[i] != Y[lenY - 1 - i]) 
            ct++; 
    } 
 
    if(ct == 0) 
        cout << "Yes the second is reversed of the first"; 
    else 
        cout << "No"; 
 
    return 0; 
}