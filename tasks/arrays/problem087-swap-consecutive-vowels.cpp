/* 
Problem 087

Description:
Finds consecutive vowels in the string
and swaps their positions.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[300]; 
 
    gets_s(X, 300); 
 
    for(int i = 0; X[i] != '\0'; i++) 
    { 
        // check vowels 
        if( 
           (X[i] == 'a' || X[i] == 'e' || X[i] == 'i' || X[i] == 'o' || X[i] == 'u') 
           && 
           (X[i+1] == 'a' || X[i+1] == 'e' || X[i+1] == 'i' || X[i+1] == 'o' || X[i+1] == 'u') 
          ) 
        { 
            // swap 
            char temp = X[i]; 
            X[i] = X[i+1]; 
            X[i+1] = temp; 
        } 
    } 
 
    cout << X; 
 
    return 0; 
}