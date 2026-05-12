/* 
Problem 075

Description:
Counts the number of words that start with a vowel.
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
    char X[300]; 

    gets(X); 

    int len = 0; 

    while(X[len] != '\0') 
        len++; 

    int ct = 0; 

    for(int i = 0; i < len; i++) 
    { 
        if(i == 0 || X[i - 1] == ' ') 
        { 
            if(X[i] == 'a' || X[i] == 'e' || 
               X[i] == 'i' || X[i] == 'o' || 
               X[i] == 'u') 
            { 
                ct++; 
            } 
        } 
    } 

    cout << ct << " words"; 

    return 0; 
}