/* 
Problem 092

Description:
Counts the number of words
that end with a vowel letter.
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
    char X[300]; 

    gets_s(X, 300); 

    // calculate length
    int len = 0; 

    while(X[len] != '\0') 
        len++; 

    int ct = 0; 

    for(int i = 0; i < len; i++) 
    { 
        // end of word
        if(X[i+1] == ' ' || X[i+1] == '\0') 
        { 
            // vowel check
            if(X[i]=='a' || X[i]=='e' || X[i]=='i' || X[i]=='o' || X[i]=='u' || 
               X[i]=='A' || X[i]=='E' || X[i]=='I' || X[i]=='O' || X[i]=='U') 
            {
                ct++;
            }
        } 
    } 

    cout << ct << " words"; 

    return 0; 
}