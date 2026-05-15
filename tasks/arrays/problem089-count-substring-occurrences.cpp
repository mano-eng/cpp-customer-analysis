/* 
Problem 089

Description:
Counts how many times a substring
appears inside a string.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[300]; 
    char Y[100]; 
 
    gets_s(X, 300); 
    gets_s(Y, 100); 
 
    int count = 0; 
 
    for(int i = 0; X[i] != '\0'; i++) 
    { 
        int same = 1; 
        int j = 0; 
 
        while(Y[j] != '\0') 
        { 
            if(X[i + j] != Y[j]) 
            { 
                same = 0; 
                break; 
            } 
            j++; 
        } 
 
        if(same == 1) 
        { 
            count++; 
        } 
    } 
 
    cout << count << " times"; 
 
    return 0; 
}