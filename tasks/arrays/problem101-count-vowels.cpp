/* 
Problem 101

Description:
Counts the number of vowel letters
(a, e, i, o, u) in a string.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[300]; 
 
    gets_s(X, 300); 
 
    int count = 0; 
 
    for(int i = 0; X[i] != '\0'; i++) 
    { 
        if(X[i] == 'a' ||  
           X[i] == 'e' ||  
           X[i] == 'i' ||  
           X[i] == 'o' ||  
           X[i] == 'u') 
        { 
            count++; 
        } 
    } 
 
    cout << count; 
 
    return 0; 
}