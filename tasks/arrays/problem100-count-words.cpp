/* 
Problem 100

Description:
Counts the number of words
in a string by counting spaces.
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
    char X[300]; 

    gets_s(X, 300); 

    int ct = 0; 

    for(int i = 0; X[i] != '\0'; i++) 
    { 
        // every space means a word ended
        if(X[i] == ' ') 
            ct++; 
    } 

    // add the last word
    ct++; 

    cout << ct; 

    return 0; 
}